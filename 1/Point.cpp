#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(double x, double y) : x(x), y(y) {}

void Point::print() const {
    cout << "Point(" << x << ", " << y << ")\n";
}
