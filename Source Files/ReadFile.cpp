#include "ReadFile.h"
#include <fstream>
#include <iostream>

void ReadFile::readData() {
    ifstream f("data.dat");
    if (f.is_open()) {
        string line;
        while (getline(f, line)) {
            cout << line << endl;
        }
        f.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }
}
