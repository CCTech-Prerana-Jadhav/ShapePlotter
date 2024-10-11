#include <iostream>
#include "Manager.h"
using namespace std;

int main() {
    string shape;
    cout << "Which Shape do you want to draw or read (point/line/triangle/rectangle/square/circle/polygon): ";
    cin >> shape;

    Manager M(shape);

    return 0;
}
