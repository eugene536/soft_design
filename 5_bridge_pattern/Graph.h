#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <memory>

#include "DrawingApi.h"
#include "RenderArea.h"

struct Graph {
    typedef std::vector<std::vector<int>> graph_t;

    enum {
        center_w = RenderArea::width / 2,
        center_h = RenderArea::height / 2,
        radius = 100,
        local_radius = 20
    };

    Graph(DrawingApi * api)
        : _drawing_api(api)
    {}

    virtual ~Graph() {}

    void draw() {
        QPointF center(center_w, center_h);
        QPointF vec(1, 0);

        size_t n = _graph.size();
        double angle = 2 * M_PI / n;
        for (size_t i = 0; i < n; ++i) {
            QPointF ithCoord = center + vec * radius;
            _coords.push_back(ithCoord - vec * local_radius);
            _drawing_api->drawCircle(ithCoord, local_radius);
            _drawing_api->drawText(ithCoord, QString::number(i));

            vec = QPointF (vec.x() * cos(angle) - vec.y() * sin(angle),
                           vec.x() * sin(angle) + vec.y() * cos(angle));
        }

        drawImpl();
    }

    virtual void drawImpl() const = 0;

    virtual std::ostream& print(std::ostream& out) const = 0;

    virtual std::istream& read(std::istream& in) = 0;

    friend inline
    std::ostream& operator<<(std::ostream& out, Graph const & graph);

    friend inline
    std::istream& operator>>(std::istream& in, Graph & graph);

    std::unique_ptr<DrawingApi> _drawing_api;
    std::vector<QPointF> _coords;
    graph_t _graph;
};

inline
std::ostream& operator<<(std::ostream& out, Graph const & graph) {
    return graph.print(out);
}

inline
std::istream& operator>>(std::istream& in, Graph & graph) {
    return graph.read(in);
}

#endif // GRAPH_H
