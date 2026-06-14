// C++ program to find the product of digits of a number
#include <iostream>
using namespace std;

int main() {
    int n, product = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        product = product * (n % 10);
        n = n / 10;
    }

    cout << "Product of digits = " << product;

    return 0;
}