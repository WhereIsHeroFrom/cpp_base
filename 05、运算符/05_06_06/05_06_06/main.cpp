#include <iostream>
using namespace std;

/*
     x >> y    x / 2^y
*/

int main() {
	// 1. 正数的右移
	int a = 0b111;  // 7
	a = (a >> 1);
	cout << a << endl;

	// 2. 负数的右移
	int b = -1;
	cout << (-1 >> 1) << endl;
	// 11111111 11111111 11111111 11111111  =-1
	// 111111111 11111111 11111111 1111111  =-1

	// 3. 去掉低 k 位
	int c = 0b10000101;
	cout << (c >> 7) << endl;

	// 4. 取到第低k位的值
	int d = 0b101010101;
	cout << ((d >> 4) & 1) << endl;
 

	return 0;
}