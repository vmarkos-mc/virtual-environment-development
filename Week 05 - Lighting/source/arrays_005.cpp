// source/arrays_005.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 6, 5, 1};
    int* ptr = arr;
    ptr++;
    cout << *ptr << endl;
}