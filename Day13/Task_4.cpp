// Task 4: Write a program that reads an integer n from the user, then reads n integers into an array and counts how many of them are even and how many are odd.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}