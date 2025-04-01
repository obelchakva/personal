/*Вывести подпоследовательность с минимальной суммой*/

#include <iostream>

using namespace std;

int main()
{
	int a[12];
	int sum = 0;
	int min_sum = 999;
	int min_start;
	int min_end;
	for(int i = 0; i < 12; i++) {
		cin >> a[i];
	}
	for(int i =0; i < 12; i++) {
		for(int j = i; j < 12; j++) {
			sum = 0;
			for(int q = i; q <= j; q++) {
				sum += a[q];
			}
			if(sum < min_sum) {
				min_sum = sum;
				min_start = i;
				min_end = j;
			}
		}
	}
	for(int i = min_start; i <= min_end; i++) {
		cout << a[i] << " ";
	}
}
