#include <iostream>
using namespace std;

int main() {
	int x = 6;
	int y = 9;

	x = y;   // �� y ��ֵ��ֵ�� x
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