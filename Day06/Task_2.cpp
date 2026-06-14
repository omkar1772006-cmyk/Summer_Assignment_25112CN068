// C++ program to convert binary number to decimal number
#include <iostream>
using namespace std;

int main()
{
    long long binary;
    int decimal = 0;
    int base = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0)
    {
        int digit = binary % 10;
        decimal = decimal + digit * base;
        base = base * 2;
        binary = binary / 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}