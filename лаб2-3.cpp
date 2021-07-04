#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int temp;

	for (int i = 0; i < 10 - 1; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
