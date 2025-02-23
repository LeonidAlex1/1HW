#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Point.h"

using namespace std;

int main() {
    // Create shapes
    Triangle t(Point(0, 0), Point(1, 1), Point(2, 0));
    Rectangle r(Point(0, 2), Point(2, 2), Point(0, 0), Point(2, 0));
    Circle c(Point(3, 3), 2);

    // Print shapes
    t.print();
    r.print();
    c.print();

    return 0;
}
