// source/stars_001.cpp
#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Enter a double: ";
    cin >> x;
    double *y = &x;
    cout << (*y == x) << endl;  
}