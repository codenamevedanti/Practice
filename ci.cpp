#include <iostream>
// #include <math.h>
using namespace std;

int main()
{
    int p, n;
    float r;
    float ci;

    cout << "Enter the value of principle , years , roi ";
    cin >> p >> n >> r;

    ci = p * (1 + r / 100) * n;
    cout << "The Compound intrest is :" << ci;
}
