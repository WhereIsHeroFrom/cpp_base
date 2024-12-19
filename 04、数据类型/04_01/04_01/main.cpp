#include <iostream>
using namespace std;

/*

short        2字节  00         2^16    (-32768 -> 32767)
int          4字节  0000       2^32    (-2147483648 -> 2147483647)
long         4字节  0000       2^32    (-2147483648 -> 2147483647)
long long    8字节  00000000   2^64    (-2^63 -> 2^63-1)
 
 [l, r]
*/

int main() {
	short a = 32769;
	int b = 2147483648;
	long c = 1;
	long long d = 1;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	return 0;
}

