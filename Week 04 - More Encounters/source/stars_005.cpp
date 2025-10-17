// source/stars_005.cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an int: ";
    cin >> x;
    int *ptrx = &x;
    (*ptrx)++;
    cout << x << endl;  
}