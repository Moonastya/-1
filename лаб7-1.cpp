#include <iostream>
using namespace std;

double sr(double a, double b) {
    return 2 / (1 / a + 1 / b);
}

int main() {
   
    double a, b;
    cout << "Введите 1 число: ";
    cin >> a;
    cout << "Введите 2 число: ";
    cin>> b;
    cout << "Cреднее гармоническое двух чисел: " << sr(a, b); 
    return 0;
}
