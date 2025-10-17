// source/stars_006.cpp
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two ints: ";
    cin >> x;
    cin >> y;
    int *ptrx = &x;
    int *ptry = &y;
    ptry = ptrx;
    (*ptrx)--;
    ptry = &y;
    cout << x << ", " << y << endl;  
}