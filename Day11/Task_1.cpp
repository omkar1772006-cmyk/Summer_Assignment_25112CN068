// Task 1: Write a program that reads two integers from the user and outputs their sum.
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Sum = " << sum(a, b);

    return 0;
}