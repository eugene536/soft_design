#ifndef DRAWING_API_H
#define DRAWING_API_H

#include <inttypes.h>

#include <QPainter>
#include <QPoint>

struct DrawingApi {
    DrawingApi(QPainter * painter)
        : _painter(painter)
    {}

    virtual ~DrawingApi() {}

    virtual void drawCircle(QPointF const & center, uint8_t rad) {
        _painter->drawEllipse(center, rad, rad);
    }

    virtual void drawSegment(QPointF const & left, QPointF const & right) {
        _painter->drawLine(left, right);
    }

    virtual void drawText(QPointF const & center, QString const & text) {
        _painter->save();

        QFont font;
        font.setPixelSize(15);
        _painter->setFont(font);

        _painter->drawText(center, text);

        _painter->restore();
    }

    QPainter * _painter;
};

#endif // DRAWING_API_H
