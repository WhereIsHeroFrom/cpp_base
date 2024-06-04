#include <iostream>
using namespace std;

int main() {
	int a = 6;
	int b = 9;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a * 1.0 / b << endl;

	a = 10000000;
	b = 100000;
	cout << a * b << endl;
	cout << (long long)a * b << endl;

	a = -1;
	b = 2;
	cout << a / b << endl;

	a = +6;   // 6
	b = -a;
	int c = -(-a);
	cout << a << ' ' << b << ' ' << c << endl;

	char A = 'A';
	A = A + 1;
	A = A + 1;
	cout << A << endl;

	return 0;
}