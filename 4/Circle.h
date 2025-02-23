#pragma once


#include "Point.h"

using namespace std;

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

