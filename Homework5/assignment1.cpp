/*Вывести все элементы большие чем среднее арифметическое*/

#include <iostream>

using namespace std;

int main()
{
	int a[12];
	for(int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	int sum = 0;
	int srednee = 0;
	for(int i = 0; i < 12; i++) {
		sum += a[i];
	}
	srednee = sum / 12;
	cout << "Среднее арифметическое = " << srednee << endl;
	for(int i = 0; i < 12; i++) {
		if(a[i] > srednee) {
			cout << a[i] << endl;
		}
	}
}
