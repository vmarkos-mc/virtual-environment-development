// source/stars_004.cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an int: ";
    cin >> x;
    int *y = &x;
    cout << y << endl;  
}