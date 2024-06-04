#include <iostream>
using namespace std;

/*
| a  |  b |
| 6  |  9 | 
*/

void swap(int a, int b) {
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "---" << endl;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "---" << endl;
}

int main() {
	int a = 6;
	int b = 9;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}