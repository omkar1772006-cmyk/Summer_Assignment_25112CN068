// Task 2: Write a program that reads an integer from the user and checks if it is an Armstrong number.
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    if (n < 0)
        return false;

    int original = n;
    int digits = 0;
    int sum = 0;
    int temp = n;

    if (n == 0)
        digits = 1;
    else
    {
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }
    }

    temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        int power = 1;
for (int i = 0; i < digits; i++)
{
    power *= digit;
}
sum += power;
        temp /= 10;
    }

    return sum == original;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}