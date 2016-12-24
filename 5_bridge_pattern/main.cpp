#include <QApplication>
#include <QDebug>

#include "Window.h"

int main(int argc, char *argv[]) {
    Q_INIT_RESOURCE(graphs);

    QApplication app(argc, argv);

    bool green  = argc > 1 && std::string(argv[1]) == "green";
    bool matrix = argc > 2 && std::string(argv[2]) == "matrix";

    qDebug() << "green: " << green << "; matrix: " << matrix;

    Window window(green, matrix);
    window.show();

    return app.exec();
}
