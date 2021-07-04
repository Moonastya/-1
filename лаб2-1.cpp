#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	int a = 2, b = 5, c = 0;
	int x;
	int D = b * b - 4 * a * c;
	if (D >= 0)
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;

	}
	else cout << "Корней нет" << endl;
}
