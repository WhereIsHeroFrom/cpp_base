#include <iostream>
using namespace std;


int main() {
	int a = 1;
	a = (5 - 6, 8 + 9, 100 / 7);   // -1, 17, 14
	cout << a << endl;

	// 1. °¸Àý1
	int x = 4; 
	int y = 5;
	int tmp = x;
	x = y;
	y = tmp;
	cout << x << ' ' << y << endl;

	tmp = x, x = y, y = tmp;
	cout << x << ' ' << y << endl;

	return 0;
}