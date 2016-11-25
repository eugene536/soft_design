#ifndef BLACK_DRAWING_API_H
#define BLACK_DRAWING_API_H

#include <QDebug>

#include "DrawingApi.h"

struct BlackDrawingApi
    : DrawingApi
{
    BlackDrawingApi(QPainter * painter)
        : DrawingApi(painter)
    {
        QColor color(0, 0, 0);
        painter->setPen(color);
    }
};

#endif // BLACK_DRAWING_API_H
