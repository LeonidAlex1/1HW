#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
private:
    Point center;
    double radius;

public:
    Circle(Point c, double r) : center(c), radius(r) {}

    void print() const {
        cout << "Circle with center ";
        center.print();
        cout << " and radius " << radius << "\n";
    }
};

#endif
