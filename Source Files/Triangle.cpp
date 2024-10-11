#include "Triangle.h"
#include "WriteFile.h"

#include <iostream>
using namespace std;

void Triangle::draw() {
    cout << "Drawing Triangle..." << endl;
}

void Triangle::inputCoordinates() {
    cout << "Enter coordinates for Triangle T1(x1,y1): ";
    cin >> T1.x >> T1.y;

    cout << "Enter coordinates for Triangle T2(x1,y1): ";
    cin >> T2.x >> T2.y;

    cout << "Enter coordinates for Triangle T3(x1,y1): ";
    cin >> T3.x >> T3.y;

    string data = to_string(T1.x) + " " + to_string(T1.y) + "\n" +
                  to_string(T2.x) + " " + to_string(T2.y) + "\n" +
                  to_string(T3.x) + " " + to_string(T3.y) + "\n" +
                  to_string(T1.x) + " " + to_string(T1.y) + "\n";

    WriteFile wf;
    wf.writeData(data);
}

Triangle :: Triangle(){
}

Triangle :: ~Triangle(){
}