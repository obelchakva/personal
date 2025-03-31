/*Вывести все элементы стоящие после максимального элемента*/

#include <iostream>

using namespace std;

int main()
{
	int a[12];
	for(int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	int max = a[0];
	int max_index;
	for(int i = 0; i < 12; i++) {
		if(a[i] > max) {
			max = a[i];
			max_index = i;
		}
	}
	cout << "Максимальный элемент: " << max << endl;
	for(int i = 0; i < 12; i++) {
		if(i > max_index) {
			cout << a[i] << endl;
		}
	}
}
