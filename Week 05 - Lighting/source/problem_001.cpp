// source/problem_001.cpp
#include <iostream>
using namespace std;

double foo(int x) {
    double y = x / 2;
    return y;
}

int main() {
    cout << foo("5") << endl;
}