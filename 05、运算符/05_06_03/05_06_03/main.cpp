#include <iostream>
using namespace std;

/*
       ^  异或
*/
int main() {
	// 1. 异或的定义
	int a = 0b1010;
	int b = 0b0110;
	//  ^ = 0b1100;
	cout << (a ^ b) << endl;
	cout << "---" << endl;

	// 2. 标记位取反
	int c = 0b1000101;
	//      0b0001000
	cout << c << endl;
	cout << (c ^ 0b1000) << endl;
	cout << ((c ^ 0b1000) ^ 0b1000) << endl;
	cout << "---" << endl;

	// 3. 变量交换
	int d = 17;
	int e = 19;
	d = d ^ e;
	e = d ^ e;  // = d' ^ e = d ^ e ^ e = d ^ 0 = d
	d = d ^ e;  // = d' ^ d = d ^ e ^ d = d ^ d ^ e = 0 ^ e = e
	cout << d << ' ' << e << endl;
	cout << "---" << endl;
	// 3.1 任何数和0异或，还是它本身
	// 3.2 两个相同的数异或，结果为0
	// 3.3 异或满足交换律和结合律
	// 异或：不带进位的二进制加法


	// 4. 出现奇数次的数
	
	// 5. 加密
	int x = 1314;
	cout << "520" << x << endl;
	int y = (x ^ 3135);
	cout << "520" << y << endl;
	cout << "520" << (y^3135) << endl;



	return 0;
}