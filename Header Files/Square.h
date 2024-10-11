#ifndef SQUARE_H
#define SQUARE_H

#include "Point.h"
#include "Line.h"
#include "Shape.h"

class Square : public DerivedShape {
public:
    Point S1, S2, S3, S4;

    void draw() override; 
    void inputCoordinates() override; 

    Square();
    ~Square();
};

#endif
