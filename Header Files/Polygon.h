#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include "Shape.h"

class Polygon : public DerivedShape {
public:
    int n;

    void draw() override;
    void inputCoordinates() override;

    Polygon();
    ~Polygon();
};

#endif