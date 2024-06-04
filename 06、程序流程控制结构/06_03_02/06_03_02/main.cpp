#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; ++i) {
		if (i < 3) {
			continue;
		}
		cout << i << endl;
	}

	int a;
	while (cin >> a) {
		if (a == 0) {
			continue;
		}
		cout << a << endl;
	}

	return 0;
}