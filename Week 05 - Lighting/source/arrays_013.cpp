// source/arrays_013.cpp
#include <iostream>
using namespace std;

void foo(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        if (*(arr + i) == 0) {
            *(arr + i) = 4;
        }
    }
}

int main() {
    int arr[] = {2, 6, 0, 1, 4};
    cout << arr[2] << endl;
    foo(arr, 5);
    cout << arr[2] << endl;
}