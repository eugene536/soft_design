#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class RenderArea;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(bool green, bool matrix);

private:
    RenderArea *renderArea;
};

#endif // WINDOW_H
