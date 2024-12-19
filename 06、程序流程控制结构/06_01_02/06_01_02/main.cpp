#include <iostream>
using namespace std;

int main() {
	int x;
	string y = "添砖";
	cin >> x;

	if (x & 1) {
		cout << "x 是一个你太美数~" << endl;
		y = y + "Java";
	}
	else {
		cout << "x 是一个不太美数~" << endl;
	}
	cout << y << endl;

	return 0;
}