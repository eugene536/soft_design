#include <QApplication>

#include "Window.h"
#include "AdjacencyMatrixGraph.h"
#include "GreenDrawingApi.h"

//int main(int argc, char *argv[])
//{
//    adjacency_matrix_graph g(new green_drawing_api(), graph::graph_t());
//    g.draw();

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
