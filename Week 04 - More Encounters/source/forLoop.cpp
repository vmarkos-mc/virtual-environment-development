// source/forLoop.cpp
#include <iostream>
using namespace std;

int main() {
    int x; // Declare variable
    int sum = 0; // Initialise variable
    for (int i = 0; i < 5; i++) {
    // for (index, terminating condition; step)
        cout << "Please, enter an integer: ";
        cin >> x;
        sum = sum + x;
    }
    cout << "Sum: " << sum << ".\n";
    // We can chain outputs in cout with "<<"
    return 0;
}