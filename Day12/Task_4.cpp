// Task 4: Write a program that reads an integer from the user and checks if it is a perfect number.
#include <iostream>
using namespace std;

bool isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    if (isPerfect(n))
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}