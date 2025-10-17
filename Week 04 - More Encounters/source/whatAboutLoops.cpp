// source/whatAboutLoops.cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int f;
    for (int j = 0; j < 5; j++) {
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
}