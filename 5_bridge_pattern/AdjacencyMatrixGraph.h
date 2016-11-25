#ifndef ADJACENCY_MATRIX_GRAPH_H
#define ADJACENCY_MATRIX_GRAPH_H

#include <QDebug>

#include "Graph.h"

struct AdjacencyMatrixGraph
    : Graph
{
    AdjacencyMatrixGraph(DrawingApi * api)
        : Graph(api)
    {}

    void drawImpl() const override {
        qDebug() << "adjacency_matrix_graph::draw() const";

        for (size_t i = 0; i < _graph.size(); ++i) {
            for (size_t j = i + 1; j < _graph[i].size(); ++j) {
                if (_graph[i][j]) {
                    _drawing_api->drawSegment(_coords[i], _coords[j]);
                }
            }
        }
    }

    std::istream& read(std::istream& in) override {
        size_t n;
        in >> n;
        _graph.resize(n);
        int v;
        for (size_t i = 0; i < n; ++i) {
            for (size_t j = 0; j < n; ++j) {
                in >> v;
                _graph[i].push_back(v);
            }
        }

        return in;
    }

    std::ostream& print(std::ostream& out) const override {
        out << _graph.size() << std::endl;
        for (auto v: _graph) {
            for (auto isEd: v) {
                out << isEd << " ";
            }
            out << std::endl;
        }

        return out;
    }
};

#endif // ADJACENCY_MATRIX_GRAPH_H
