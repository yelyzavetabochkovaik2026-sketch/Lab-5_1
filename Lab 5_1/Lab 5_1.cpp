// Lab 5_1
#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double k(const double x, const double y);   // прототип
void test();                                // прототип

int main()
{
    test();                                 // unit test

    double p, q;

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    double r = (k(1 + p * q, q * q) + k(p, p * p) * k(p, p * p)) / (1 + k(p * q + q * q, p));

    cout << "r = " << r << endl;

    return 0;
}

double k(const double x, const double y)    // визначення
{
    return x / (1 + sin(y) * sin(y)) + y / (1 + x * x);
}

void test()                                 // unit test для k(x, y)
{
    assert(fabs(k(0, 0) - 0) < 1e-9);
    assert(fabs(k(1, 0) - 1) < 1e-9);
    assert(fabs(k(0, 1) - 1) < 1e-9);
    assert(fabs(k(2, 0) - 2) < 1e-9);

    cout << "All tests passed" << endl;
}