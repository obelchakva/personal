#include <iostream>

using namespace std;

int main() {
	for (int i=10; i<=100; i++) {
		if (i%2==0 && i%3==0) {
			cout << i << endl;
		}
	}
}
