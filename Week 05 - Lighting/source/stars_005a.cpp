// source/stars_005a.cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an int: ";
    cin >> x;
    int *ptrx = &x;
    int y = (*ptrx++);
    auto z = (*++ptrx);
    cout << x << "\n" << y << "\n" << z << endl;
}