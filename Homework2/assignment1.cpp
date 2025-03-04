//Найти n-й элемент последовательности фибоначчи (разумнее делать через for)//

#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int f0 = 0;
	int f1 = 1;
	int ans;
	for (int i=2; i < n; i++) {
		ans = f0 + f1;
		f0 = f1;
		f1 = ans;
	}
	cout << ans << endl;

}
