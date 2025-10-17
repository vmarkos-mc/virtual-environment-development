// source/strings_003.cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[] = "t6H0I9s6.iS.999a9.STRING";
    char c = str[0];
    for(int i = 0; c != '\0'; c = str[++i]) {
        if(isalpha(c))
            cout << (char)(isupper(c) ? tolower(c) : c);
        else if(ispunct(c))
            cout << ' ';
    }
    cout << endl;
}