// A strong number is a number whose sum of the factorial of its digits is equal to the original number.
#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;

        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is a Strong Number";
    else
        cout << n << " is not a Strong Number";

    return 0;
}