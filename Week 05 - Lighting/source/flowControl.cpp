// source/flowControl.cpp
#include <iostream>
using namespace std;

int main() { // Main signature (it returns an integer)
    char knowsCpp; // Declaring a char variable
    cout << "Do you know C++? (y/n)\n";
    cin >> knowsCpp; // Read from in stream
    if (knowsCpp == 'y') { // Base case
        cout << "Congrats! You already know C++!\n";
    } else if (knowsCpp == 'n') { // If the above fails
        cout << "Dont't worry, you can attend this course!\n";
    } else { // In case all of the above have failed
        cout << "Please, enter 'y' or 'n'.\n";
    }
    return 0;
}