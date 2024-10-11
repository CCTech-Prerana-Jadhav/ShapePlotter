#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : public DerivedShape {
public:
    Point O;
    int r;

    void draw() override;
    void inputCoordinates() override;

    Circle();
    ~Circle();
};

#endif
