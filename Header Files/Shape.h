#ifndef SHAPE_H
#define SHAPE_H

class BaseShape {
public:
    virtual void draw() = 0; 
    virtual void inputCoordinates() = 0; 
    virtual ~BaseShape() {} 
};

class DerivedShape : public BaseShape {
public:
    void draw() override; 
    void inputCoordinates() override; 
    virtual ~DerivedShape(); 
};

#endif
