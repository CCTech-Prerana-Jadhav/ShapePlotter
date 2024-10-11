#ifndef LINE_H
#define LINE_H

#include "Shape.h"
#include "Point.h"

class Line : public DerivedShape {
public:
    Point l1;
    Point l2;

    void draw() override;
    void inputCoordinates() override;

    Line();
    ~Line();
};

#endif
