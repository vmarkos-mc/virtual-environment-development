// source/2d_arrays_007.cpp
#include <iostream>
using namespace std;

int foo(int arr[][3], int rows, int cols) {
    return arr[rows - 1][cols - 1];
}

int main() {
    int arr[][3] = { 2, 0, -3, 4, 6, 7 };
    int x = foo(arr, 2, 3);
    cout << x << endl;
}