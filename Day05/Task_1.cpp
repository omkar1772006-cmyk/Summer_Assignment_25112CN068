// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
        cout << n << " is a Perfect Number";
    else
        cout << n << " is not a Perfect Number";

    return 0;
}