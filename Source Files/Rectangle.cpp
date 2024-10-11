#include "Rectangle.h"
#include "WriteFile.h"

#include <iostream>
using namespace std;

void Rectangle::draw() {
    cout << "Drawing Rectangle..." << endl;
}

void Rectangle::inputCoordinates() {
    cout << "Enter coordinates for Rectangle (x1,y1): ";
    cin >> R1.x >> R1.y;
    cout << "Enter coordinates for Rectangle (x3,y3): ";
    cin >> R3.x >> R3.y;

    if (R1.x == R2.x || R1.y == R3.y) {
    cout << "Not a rectangle, invalid coordinates!" << endl;
    return; 
}


    R2.x = R3.x;
    R2.y = R1.y;
    R4.x = R1.x;
    R4.y = R3.y;

    string data = to_string(R1.x) + " " + to_string(R1.y) + "\n" +
                  to_string(R2.x) + " " + to_string(R2.y) + "\n" +
                  to_string(R3.x) + " " + to_string(R3.y) + "\n" +
                  to_string(R4.x) + " " + to_string(R4.y) + "\n" +
                  to_string(R1.x) + " " + to_string(R1.y) + "\n";

    WriteFile wf;
    wf.writeData(data);
}

Rectangle::Rectangle() {
}

Rectangle::~Rectangle() {
}