/* Циклический сдвиг влево
   1 2 3 4 5 -> 2 3 4 5 1 */

#include <iostream>

using namespace std;

int main()
{
	int a[5];
	int p;
	for(int i =0; i < 5; i++) {
		cin >> a[i];
	}
	p = a[0];
	for(int i = 0; i < 4; i++) {
		a[i] = a[i+1];
	}
	a[4] = p;
	for(int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
}
