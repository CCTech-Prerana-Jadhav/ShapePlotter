#include "Point.h"
#include "WriteFile.h"

#include <iostream>
using namespace std;

using namespace std;

void Point::draw() {
    cout << "Drawing Point..." << endl;
}

Point::Point() {  
}

Point::~Point() {
}

void Point::inputCoordinates() {
    cout << "Enter coordinates for Pint (x1,y1): ";
    cin >> x >> y;

    string data = to_string(x) + " " + to_string(y);

    WriteFile wf;
    wf.writeData(data);
}

