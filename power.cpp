#include <iostream>
using namespace std;
int power (int,int);
int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i)
        result *= base;
    return result;
}

