/* Циклический сдвиг вправо
   1 2 3 4 5 -> 5 1 2 3 4 */

#include <iostream>

using namespace std;

int main() 
{
	int a[5];
	int p;
	for(int i =0; i < 5; i++) {
		cin >> a[i];
	}
	p = a[4];
	for(int i = 4; i > 0; i--) {
		a[i] = a[i-1];
	}
	a[0] = p;
	for(int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}
}
