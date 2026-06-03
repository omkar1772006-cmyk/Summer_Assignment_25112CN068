// C++ program to print all prime numbers in a given range
#include <iostream>
using namespace std;

int main() {
    int start, end, i, j;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (i = start; i <= end; i++) {
        bool prime = true;

        if (i <= 1)
            prime = false;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << i << " ";
    }

    return 0;
}