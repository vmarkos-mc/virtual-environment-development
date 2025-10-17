// source/arrays_003.cpp
#include <iostream>
using namespace std;

int main() {
    char arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "Please, enter a character: ";
        cin >> arr[i];
    }
    cout << arr[0] << arr[1] << arr[2] << endl;
}