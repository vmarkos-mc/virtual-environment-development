// source/foo.cpp
#include <iostream>
using namespace std;

int foo(int x) {
    return x + 5;
}

void foo(char x) {
    cout << x << endl;
}

int foo(double x) {
    return x + 5.06;
}

int main() {
    cout << foo(6) << endl;
    foo('3');
    cout << foo(5.8) << endl;
}