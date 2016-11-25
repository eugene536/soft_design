#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>

class RenderArea
    : public QWidget
{
    Q_OBJECT

public:
    enum Shape {
        Line,
        Ellipse
    };

    enum {
        width = 500,
        height = 500
    };

    RenderArea(QWidget *parent, bool green, bool matrix);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    Shape shape;
    QPen pen;
    QBrush brush;
    bool _green;
    bool _matrix;
};

#endif // RENDERAREA_H
