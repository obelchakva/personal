/*Поменять местами максимум и минимум в массиве*/

#include <iostream>

using namespace std;

int main()
{
	int a[12];
	for(int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	int max = a[0];
	int min = a[0];
	int max_index = 0;
	int min_index = 0;
	for(int i = 0; i < 12; i++) {
		if(a[i] > max) {
			max = a[i];
			max_index = i;
		}
		else if(a[i] < min) {
			min = a[i];
			min_index = i;
		}
	}
	cout << "Максимальный элемент: " << max << endl;
	cout << "Минимальный элемент: " << min << endl;
	a[max_index] = min;
	a[min_index] = max;
	for(int i = 0; i < 12; i++) {
		cout << a[i] << " ";
	}
}
