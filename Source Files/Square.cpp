#include "Square.h"
#include "WriteFile.h"

#include <iostream>
using namespace std;

void Square::draw() {
    cout << "Drawing Square..." << endl;
}

void Square::inputCoordinates() {
    cout << "Enter coordinates for Square (x1,y1): ";
    cin >> S1.x >> S1.y;

    int l;
    cout << "Enter length of square: ";
    cin >> l;

    S2.x = S1.x + l;
    S2.y = S1.y;
    S3.x = S2.x;
    S3.y = S2.y + l;
    S4.x = S1.x;
    S4.y = S1.y + l;

    string data = to_string(S1.x) + " " + to_string(S1.y) + "\n" +
                  to_string(S2.x) + " " + to_string(S2.y) + "\n" +
                  to_string(S3.x) + " " + to_string(S3.y) + "\n" +
                  to_string(S4.x) + " " + to_string(S4.y) + "\n" +
                  to_string(S1.x) + " " + to_string(S1.y) + "\n";

    WriteFile wf;
    wf.writeData(data);
}

Square::Square() {
}

Square::~Square() {
}
