// Task 3: Write a program that reads an integer from the user and outputs the first n Fibonacci numbers.
#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}