#include <iostream>
using namespace std;

int main() {
	int x = 6;
	int y = 9;

	x = y;   // 将 y 的值赋值给 x
	cout << x << endl;

	x += y; // x = x + y;
	cout << x << endl;

	x -= y; // x = x - y;
	cout << x << endl;

	x *= y; // x = x * y;
	cout << x << endl;

	x /= y; // x = x / y;
	cout << x << endl;

	x %= y; // x = x % y;
	cout << x << endl;

	return 0;
}