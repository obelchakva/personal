#include <iostream>

using namespace std;

int main() {
	int n;
	int ans = 0;
	cin >> n;
	for (int i=0; i<=n; i++) {
		if (i%2!=0) {
			ans+=i;
		}
	}
	cout << ans << endl;
}
