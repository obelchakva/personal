/*Дано n, далее координаты двух n-мерных векторов. Вывести их скалярное произведение.*/

#include <iostream>

using namespace std;

int main()
{
	int mera;
	cin >> mera;
	float v1[mera];
	float v2[mera];
	float ans = 0;
	cout << "Введите координаты первого вектора..." << endl;
	for(int i =0; i < mera; i++) {
		cin >> v1[i];
	}
	cout << "Введите координаты второго вектора..." << endl;
	for(int i =0; i < mera; i++) {
		cin >> v2[i];
	}
	for(int i = 0; i < mera; i++) {
		ans += v1[i] * v2[i];
	}
	cout << "Ответ: " << ans << endl;
}
