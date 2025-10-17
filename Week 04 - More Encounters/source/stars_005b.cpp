// source/stars_005b.cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an int: ";
    cin >> x;
    int *ptrx = &x;
    cout << "ptrx: " << ptrx << endl;
    ++ptrx;
    double y = *ptrx;
    cout << x << "\n" << y << endl;
    cout << "ptrx: " << ptrx << endl;
}