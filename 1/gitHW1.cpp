#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}

    void print() const {
        cout << "(" << x << ", " << y << ")";
    }
};

#endif
