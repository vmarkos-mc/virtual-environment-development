// source/whileLoop.cpp
#include <iostream>
using namespace std;

int main() {
    const int GUESS = 4; // Constant value (immutable)
    int x; // Declare variable
    cout << "Guess what I'm thinking (int): ";
    cin >> x;
    while (x != GUESS) { // Repeat while condition holds
        cout << "No, try again: ";
        cin >> x;
    }
    cout << "Congratulations! You guessed right!\n";
    return 0;
}