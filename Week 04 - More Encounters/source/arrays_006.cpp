// source/arrays_006.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 6, 5, 1};
    float* ptr = (float*) arr;
    ptr++;
    cout << *ptr << endl;
}