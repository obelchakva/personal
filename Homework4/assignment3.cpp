/* Максимальный промежуток постоянства
   1 1 1 1 2 2 2 3 3 3 3 3 -> 3 */

#include <iostream>

using namespace std;

int main()
{
	int a[12];
	for(int i =0; i < 12; i++) {
		cin >> a[i];
	}
	int count = 1;
	int max_count;
	for(int i = 0; i < 11; i++) {
		if(a[i] == a[i+1]) {
			count +=1;
		} 
		else {
			if(count > max_count) {
				max_count = count;
			}
			count = 1;
		}
	}
	cout << max_count << endl;
}
