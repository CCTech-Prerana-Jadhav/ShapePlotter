#include "Shape.h"

#include <iostream>
using namespace std;


void DerivedShape::draw() {
    cout << "Drawing DerivedShape" << endl;
}

void DerivedShape::inputCoordinates() {
    cout << "Input for DerivedShape not implemented." << endl;
}

DerivedShape::~DerivedShape() {
    
}