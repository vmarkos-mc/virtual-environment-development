// source/stars_009.cpp
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two ints: ";
    cin >> x;
    cin >> y;
    const int *p1 = &x;
    int * const p2 = &x;
    (*p1)++;
}