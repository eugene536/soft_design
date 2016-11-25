#include <sstream>

#include <QDir>
#include <QDebug>
#include <QPainter>
#include <QVariant>
#include <QFile>
#include <QFileInfo>

#include "GreenDrawingApi.h"
#include "BlackDrawingApi.h"
#include "AdjacencyMatrixGraph.h"
#include "ListOfEdgesGraph.h"

#include "RenderArea.h"

RenderArea::RenderArea(QWidget *parent, bool green, bool matrix)
    : QWidget(parent)
    , _green(green)
    , _matrix(matrix)
{
    shape = Ellipse;

    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(width, height);
}

QSize RenderArea::sizeHint() const
{
    return QSize(width, height);
}

void RenderArea::paintEvent(QPaintEvent * /* event */) {
    QPainter painter(this);

    DrawingApi * api;
    if (_green) {
        api = new GreenDrawingApi(&painter);
    } else {
        api = new BlackDrawingApi(&painter);
    }

    std::unique_ptr<Graph> graph;
    QString path;
    if (_matrix) {
        graph.reset(new AdjacencyMatrixGraph(api));
        path = ":/matrix1";
    } else {
        graph.reset(new ListOfEdgesGraph(api));
        path = ":/edges1";
    }

    QFile file(path);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        std::stringstream inStream(in.readAll().toStdString());
        inStream >> *graph;
    }

    graph->draw();

//    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
//        QDataStream textStream(&file);

//        textStream >> *graph;
//        std::cerr << *graph ;

//        qDebug() << "here";
//        QRect rect(10, 20, 30, 60);

//        QPainter painter(this);
//    //    painter.setPen(pen);
//    //    painter.setBrush(brush);

//        for (int x = 0; x < width(); x += 100) {
//            for (int y = 0; y < height(); y += 100) {
//    //            int x = 0;
//    //            int y = 0;
//                painter.save();
//                painter.translate(x, y);
//    //            if (transformed) {
//    //                painter.translate(50, 50);
//    //                painter.rotate(60.0);
//    //                painter.scale(0.6, 0.9);
//    //                painter.translate(-50, -50);
//    //            }

//                switch (shape) {
//                case Line:
//                    painter.drawLine(rect.bottomLeft(), rect.topRight());
//                    break;
//                case Ellipse:
//                    painter.drawEllipse(rect);
//                    break;
//                }
//                painter.restore();
//            }
//        }

//    //    painter.setRenderHint(QPainter::Antialiasing, false);
//    //    painter.setPen(palette().dark().color());
//    //    painter.setBrush(Qt::NoBrush);
//    //    painter.drawRect(QRect(0, 0, width() - 1, height() - 1));
//    }
}
