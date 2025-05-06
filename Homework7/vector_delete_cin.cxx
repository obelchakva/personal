/*  Удалить все вхождения заданного пользователем числа из вектора */
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
	int ch;
	cin >> ch;
	for(int i = 0; i < s; i++) {
		if(v[i] == ch) {
			v.erase(v.begin() + i);
			s -= 1;
		}
	}
	for(int i = 0; i < s; i++) {
		cout << v[i] << " ";
	}
}
