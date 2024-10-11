#include "Polygon.h"
#include "WriteFile.h"

#include <vector>
#include <iostream>
#include <limits>

using namespace std;

vector<Point> Pl;

void Polygon::draw() {
    cout << "Drawing Polygon...\n";
}

void Polygon::inputCoordinates() {
    cout << "Enter the number of points: ";
    cin >> n;

    while (n <= 0) {
        cout << "Please enter a positive integer for the number of points: ";
        cin >> n;
    }

    Pl.resize(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter coordinates for point P" << (i + 1) << " (x y): ";
        while (!(cin >> Pl[i].x >> Pl[i].y)) {
            cout << "Invalid input. Please enter two numbers for point P" << (i + 1) << ": ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }

    string data;
    for (int i = 0; i < n; i++) {
        data += to_string(Pl[i].x) + " " + to_string(Pl[i].y) + "\n";
    }
    data += to_string(Pl[0].x) + " " + to_string(Pl[0].y) + "\n"; 

    WriteFile wf;
    wf.writeData(data);
}

Polygon::Polygon() : n(0) { 
}

Polygon::~Polygon() {
    
}
