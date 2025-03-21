/* Пока не понял
   1 2 3 4 5 6 -> 2 1 4 3 6 5 */

#include <iostream>

using namespace std;

int main() 
{
	int a[6];
	for(int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < 6;) {
		swap(a[i], a[i+1]);
		i +=2;
	}
	for(int i = 0; i < 6; i++) {
		cout << a[i] << endl;
	}
}
