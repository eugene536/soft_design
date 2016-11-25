#include "RenderArea.h"
#include "Window.h"

#include <QtWidgets>

Window::Window(bool green, bool matrix)
{
    renderArea = new RenderArea(nullptr, green, matrix);

    QGridLayout *mainLayout = new QGridLayout;

    mainLayout->addWidget(renderArea);
    setLayout(mainLayout);

    setWindowTitle("Basic Drawing");
}
