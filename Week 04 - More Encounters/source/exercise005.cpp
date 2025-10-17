// source/exercise005.cpp
#include <iostream>
using namespace std;

int main() {
    double x = 1.0;
    while (x / 2 > 0) {
        x = x / 2;
    }
    double y = 1.4 * x;
    bool b = x == y;
    cout << b << "\n";
    return 0;
}