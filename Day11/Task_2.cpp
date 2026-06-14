// Task 2: Write a program that reads two integers from the user and outputs the maximum of the two.
#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b);

    return 0;
}