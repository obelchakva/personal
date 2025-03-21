/* Количество различных элементов
   1 1 1 1 2 2 2 3 3 3 3 3 -> 3 */

#include <iostream>

using namespace std;

int main()
{
	int a[12];
	for(int i =0; i < 12; i++) {
		cin >> a[i];
	}
	int count = 0;
	for(int i = 0; i <12; i++) {
		if(a[i+1] != a[i]) {
			count += 1;
		}
	}
	cout << count << endl;
}
