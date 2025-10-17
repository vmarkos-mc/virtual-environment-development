// source/functionAbstraction.cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    int i = n;
    int f = 1;
    while (i > 0) {
        f *= i;
        i--;
    }
    return f;
}

int main() {
    int n;
    int f;
    for (int j = 0; j < 5; j++) {
        cout << "Please, enter a positive integer: ";
        cin >> n;
        f = factorial(n);
        cout << n << "! == " << f << endl;
    }
}