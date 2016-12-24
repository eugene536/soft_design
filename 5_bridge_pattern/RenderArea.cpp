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
}
