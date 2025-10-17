// source/2d_arrays_001.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[2][3]; // Declare "rows" and "columns"
    arr[0][0] = 2; // Initialise each value separately.
    arr[0][1] = 5;
    arr[0][2] = -3;
    arr[1][0] = 0;
    arr[1][1] = 6;
    arr[1][2] = 7;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}