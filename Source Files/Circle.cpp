#include <iostream>
#include "Circle.h"
#include "WriteFile.h"

#include <iostream>
using namespace std;

#define PI 3.14159265358979323846

void Circle::draw() {
    cout << "Drawing Square..." << endl;
}

void Circle::inputCoordinates() {
    cout << "Enter coordinates for Center of the Circle O(x,y): ";
    cin >> O.x >> O.y;

    cout << "Enter radius of circle: ";
    cin >> r;

    string data;
    for (int i = 0; i <= 100; ++i) {
        double angle = 2.0 * PI * i / 100;
        data += to_string(O.x + r * cos(angle)) + " " + to_string(O.y + r * sin(angle)) + "\n";
    }
    data += to_string(O.x + r) + " " + to_string(O.y);

    WriteFile wf;
    wf.writeData(data);
}

Circle :: Circle() {
}

Circle :: ~Circle(){
}