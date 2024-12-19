#include <iostream>
using namespace std;

/*

     x << y   =   x * 2^y

*/

int main() {
	// 1. 正数的左移
	int x = 0b11;  // 3
	x = (x << 1);  // 0b110
	cout << x << endl;
	cout << "---" << endl;
	cout << (x << 4) << endl;
	cout << "---" << endl;

	// 2. 负数的左移
	int y = -1;
	y = (y << 1);
	cout << y << endl;
	cout << "---" << endl;

	// 3. 左移负数位
	int z = 64;
	z = (z << (-1));   // 不能这么写
	cout << z << endl;
	cout << "---" << endl;

	// 4. 左移溢出
	int a = 64;    
	a = (a << 31);
	cout << a << endl;
	// 64   = 0b1000000
	// <<31 = 0b1...00000000000000000000000000000000

	return 0;
}