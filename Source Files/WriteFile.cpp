#include "WriteFile.h"
#include <fstream>
#include <iostream>

void WriteFile::writeData(const string& data) {
    ofstream f("data.dat");
    if (f.is_open()) {
        f << data;
        f.close();
        cout << "Data written to data.dat successfully." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }
}
