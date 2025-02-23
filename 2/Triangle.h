#pragma once

#include "Point.h"

using namespace std;

class Triangle {
private:
    Point a, b, c;

public:
    Triangle(Point p1, Point p2, Point p3) : a(p1), b(p2), c(p3) {}

    void print() const {
        cout << "Triangle with points: ";
        a.print(); cout << " ";
        b.print(); cout << " ";
        c.print(); cout << "\n";
    }
};

