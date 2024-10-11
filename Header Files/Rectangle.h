#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include "Shape.h"

class Rectangle : public DerivedShape {
public:
    Point R1, R2, R3, R4;

    void draw() override; 
    void inputCoordinates() override; 

    Rectangle();
    ~Rectangle();
};

#endif
