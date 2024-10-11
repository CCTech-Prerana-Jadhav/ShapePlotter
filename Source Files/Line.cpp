#include "Line.h"
#include "WriteFile.h"

#include <iostream>
using namespace std;

void Line::draw() {
    cout << "Drawing Line..." << endl;
}


void Line::inputCoordinates() {
    cout << "Enter coordinates for Line l1(x1,y1): ";
    cin >> l1.x >> l1.y;

    cout << "Enter coordinates for Line l2(x1,y1): ";
    cin >> l2.x >> l2.y;

    string data = to_string(l1.x) + " " + to_string(l1.y) + "\n" +
                  to_string(l2.x) + " " + to_string(l2.y) + "\n";

    WriteFile wf;
    wf.writeData(data);
}

Line::Line() {
}

Line::~Line() {
}
