// source/stars_007.cpp
#include <iostream>
using namespace std;

int main() {
    int x, *y;
    cout << "Enter an int: ";
    cin >> x;
    y = &x;
    (*y)++;
    cout << x << endl;
}