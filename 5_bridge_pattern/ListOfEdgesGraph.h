#ifndef LIST_OF_EDGES_GRAPH_H
#define LIST_OF_EDGES_GRAPH_H

#include <iostream>
#include <cmath>

#include "Graph.h"

struct ListOfEdgesGraph
    : Graph
{
    ListOfEdgesGraph(DrawingApi * api)
        : Graph(api)
    {}

    void drawImpl() const override {
        qDebug() << "ListOfEdgesGraph::draw() const";

        for (size_t i = 0; i < _graph.size(); ++i) {
            for (auto to: _graph[i]) {
                _drawing_api->drawSegment(_coords[i], _coords[to]);
            }
        }
    }

    std::istream& read(std::istream& in) override {
        size_t n, m;
        in >> n >> m;
        _graph.resize(n);

        size_t from, to;
        for (size_t i = 0; i < m; ++i) {
            in >> from >> to;
            _graph[from - 1].push_back(to - 1);
        }

        return in;
    }

    std::ostream& print(std::ostream& out) const override {
        for (size_t i = 0; i < _graph.size(); ++i) {
            out << i + 1 << ": ";
            for (int to: _graph[i]) {
                out << to + 1 << " ";
            }
            out << std::endl;
        }

        return out;
    }
};

#endif // LIST_OF_EDGES_GRAPH_H
