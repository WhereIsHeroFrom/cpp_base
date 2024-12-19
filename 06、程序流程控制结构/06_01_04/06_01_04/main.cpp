#include <iostream>
using namespace std;


int main() {
	int a = 3, b = 4;
	double c = 1.6;
	int x = -1;
	if (a > b) {
		x = a;
	}
	else {
		x = b;
	}
	// 表达式1 ? 表达式2 : 表达式3;
	x = (a > b ? a : b);
	cout << ( (a > b) ? ((a > c) ? a : c) : c ) << endl;

	return 0;
}