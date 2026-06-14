// Task 1: Write a program that reads an integer n from the user, then reads n integers into an array and outputs them.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}