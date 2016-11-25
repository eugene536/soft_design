TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    Window.cpp \
    RenderArea.cpp

RESOURCES += graphs.qrc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

HEADERS += \
    Graph.h \
    DrawingApi.h \
    ListOfEdgesGraph.h \
    GreenDrawingApi.h \
    Window.h \
    RenderArea.h \
    AdjacencyMatrixGraph.h \
    BlackDrawingApi.h
