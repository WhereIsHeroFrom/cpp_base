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
	// ���ʽ1 ? ���ʽ2 : ���ʽ3;
	x = (a > b ? a : b);
	cout << ( (a > b) ? ((a > c) ? a : c) : c ) << endl;

	return 0;
}