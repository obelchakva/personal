/* Удалить максимальный и минимальный элемент из вектора */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int s;
	cin >> s;
	vector<int> v(s);
	for(int i = 0; i < s; i++) {
		cin >> v[i];
	}
	for(int i = 0; i < s; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	int a = s - 1;
	int max = 0;
	int max_index = 0;
	while(a != 0) {
		max = 0;
		max_index = 0;
		for(int i = 0; i <= a; i++) {
			if(v[i] > max) {
				max = v[i];
				max_index = i;
			}
		}
		swap(v[max_index], v[a]);
		a -= 1;
	}
	v.pop_back();
	v.erase(v.begin());
	s -= 2;
	for(int i = 0; i < s; i++) {
		cout << v[i] << " ";
	}
}
