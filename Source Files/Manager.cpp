#include <iostream>
#include "Manager.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Polygon.h"

using namespace std;

Manager::Manager(string shape) {
    if (shape == "point" || shape == "Point") {
        Point P;
        P.draw();
        P.inputCoordinates();
    }else if (shape == "line" || shape == "Line") {
        Line L;
        L.inputCoordinates();
        L.draw();
    } else if (shape == "triangle" || shape == "Triangle") {
        Triangle T;
        T.inputCoordinates();
        T.draw();
    } else if (shape == "square" || shape == "Square") {
        Square S;
        S.inputCoordinates();
        S.draw();
    } else if (shape == "rectangle" || shape == "Rectangle") {
        Rectangle R;
        R.inputCoordinates();
        R.draw();
    }else if (shape == "circle" || shape == "Circle") {
         Circle C;
         C.inputCoordinates();
         C.draw();
    } else if (shape == "polygon" || shape == "Polygon") {
        Polygon Pl;
        Pl.inputCoordinates();
        Pl.draw();
    } else {
        cout << "Invalid Shape" << endl;
    }
}

Manager::~Manager() {
    cout << "Manager -> Destructor called" << endl;
}
