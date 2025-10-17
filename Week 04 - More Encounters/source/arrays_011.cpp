// source/arrays_011.cpp
#include <iostream>
using namespace std;

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << "arr[" << i << "] == " << *(arr + i) << endl;
    }
}

int main() {
    int arr[] = {2, 6, 0, 1, 4};
    printArray(arr, 5);
}