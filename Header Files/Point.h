#ifndef POINT_H
#define POINT_H

#include "Shape.h"

class Point : public DerivedShape {
public:
    int x;
    int y;
    
    void draw() override;
    void inputCoordinates() override;

    Point();  
    ~Point();
};

#endif
