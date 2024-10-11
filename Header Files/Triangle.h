#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Shape.h"

class Triangle : public DerivedShape {
public:
    Point T1,T2,T3;

    void draw() override;
    void inputCoordinates() override;

    Triangle();
    ~Triangle();
};

#endif