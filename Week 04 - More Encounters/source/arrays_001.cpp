// source/arrays_001.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3];
    arr[0] = 4;
    arr[1] = 6;
    arr[2] = -5;
    for (int i = 0; i < 3; i++) {
        cout << "arr[" << i << "] == " << arr[i] << endl;
    }
}