//Пользователь вводит числа (неограниченно сколько) до ввода 0. Найти максимальное среди введенных чисел//

#include <iostream>

using namespace std;

int main() {

	int n;
	int max = 0;
	cin >> n;
	max = n;
	while (n != 0) {
		if (n > max) {
			max = n;
		}
		cin >> n;
	}
	cout << max << endl;

}
