// C++ program to display Fibonacci series up to n terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, c;

    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
