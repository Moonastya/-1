#include <iostream>

using namespace std;

void zam(double* a, double* b)
{
    double t = *a;
    *a = *b;
    *b = t;
}

void sort(double* a, double* b, double* c) 
{
    if (*c < *a)
        zam(c, a);
    if (*b < *a)
        zam(b, a);
    if (*c < *b)
        zam(c, b);
}

int main()
{
    double a, b, c;
    cout << "Введите a: ";
    cin >> a;
    cout << endl;
    cout << "Введите b: ";
    cin >> b;
    cout << endl;
    cout << "Введите c: ";
    cin >> c;
    cout << endl;
    sort(&a, &b, &c);
    cout << a << " " << b << " " << c;
    return 0;
}
