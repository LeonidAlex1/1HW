#pragma once


#include "Point.h"

using namespace std;

class Rectangle {
private:
    Point topLeft, topRight, bottomLeft, bottomRight;

public:
    Rectangle(Point tl, Point tr, Point bl, Point br)
        : topLeft(tl), topRight(tr), bottomLeft(bl), bottomRight(br) {
    }

    void print() const {
        cout << "Rectangle with points: ";
        topLeft.print(); cout << " ";
        topRight.print(); cout << " ";
        bottomLeft.print(); cout << " ";
        bottomRight.print(); cout << "\n";
    }
};

