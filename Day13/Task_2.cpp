// Task 2: Write a program that reads an integer n from the user, then reads n integers into an array and outputs their sum and average.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / n;

    return 0;
}