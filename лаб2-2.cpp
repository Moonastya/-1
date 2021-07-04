#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int a = rand() % 61 - 30;
	cout << a << endl;
}
