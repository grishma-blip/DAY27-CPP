// Write a program to input 8 numbers into an array and count how many of
// them are even and how many are odd.
#include <iostream>
using namespace std;
int main() 
{
    const int SIZE = 8;
    int numbers[SIZE], evenCount = 0, oddCount = 0;
    cout << "Enter 8 numbers:" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cin >> numbers[i];
        (numbers[i] % 2 == 0) ? evenCount++ : oddCount++;
    }
    cout << "Even count: " << evenCount << ", Odd count: " << oddCount << endl;
    return 0;
}