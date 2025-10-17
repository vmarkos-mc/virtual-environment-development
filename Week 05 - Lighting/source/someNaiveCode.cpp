// source/someNaiveCode.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please, enter a positive integer: ";
    cin >> n;
    int i = n;
    int f = 1;
    while (i > 0) {
        f *= i;
        i--;
    }
    cout << n << "! == " << f << endl;
    cout << "Please, enter a positive integer: ";
    cin >> n;
    i = n;
    f = 1;
    while (i > 0) {
        f *= i;
        i--;
    }
    cout << n << "! == " << f << endl;
}