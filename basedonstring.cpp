// Create a program in C++ based on Strings

// a. Reverse of string
// b. Concatenate two strings
// c. String Length calculation
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1; 
    cout << "Enter second string: ";
    cin >> str2; 
    string reversedStr1(str1.rbegin(), str1.rend());
    cout << "Reversed first string: " << reversedStr1 << endl;
    string concatenatedStr = str1 + str2;
    cout << "Concatenated string: " << concatenatedStr << endl;
    cout << "Length of first string: " << str1.length() << endl;
    return 0;
}