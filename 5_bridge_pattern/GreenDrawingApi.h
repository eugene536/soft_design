#ifndef GREEN_DRAWING_API_H
#define GREEN_DRAWING_API_H

#include <QDebug>

#include "DrawingApi.h"

struct GreenDrawingApi
    : DrawingApi
{
    GreenDrawingApi(QPainter * painter)
        : DrawingApi(painter)
    {
        QColor color(0, 255, 0);
        painter->setPen(color);
    }
};

#endif // GREEN_DRAWING_API_H
