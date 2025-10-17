// source/exercise004.cpp
#include <iostream>
using namespace std;

int main() {
    double x = 1.0;
    int i = 0;
    while (x > 0) {
        x = x / 2;
        i++;
    }
    cout << x << ", " << i << "\n";
    return 0;
}