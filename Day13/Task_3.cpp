// Task 3: Write a program that reads an integer n from the user, then reads n integers into an array and outputs the largest and smallest numbers.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;

    return 0;
}