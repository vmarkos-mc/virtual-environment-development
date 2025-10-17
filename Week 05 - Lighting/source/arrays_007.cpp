// source/arrays_007.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 6, 0, 0, 4};
    double* ptr = (double*) arr;
    ptr++;
    cout << *ptr << endl;
}