// A prime factor of a number is a factor that is a prime number. The largest prime factor of a number is the largest prime number that divides the number without leaving a remainder.
#include <iostream>
using namespace std;

int main()
{
    int n;
    int largestPrime = -1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            largestPrime = i;
            n = n / i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}