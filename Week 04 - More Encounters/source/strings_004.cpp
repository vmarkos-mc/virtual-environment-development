// source/strings_004.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char fragment1[] = "I'm a s";
  char fragment2[] = "tring!";
  char fragment3[20];
  char finalString[20] = "";

  strcpy(fragment3, fragment1);
  strcat(finalString, fragment3);
  strcat(finalString, fragment2);
  cout << finalString << endl;
}