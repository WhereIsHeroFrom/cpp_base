#include <iostream>
using namespace std;

/*
      |    位或  ：有1即1
	  ||   逻辑或：有真即真
*/

int main() {
	// 1. 位或的定义
	int a = 0b1010;     // 10
	int b = 0b0110;     // 6
	//  | = 0b1110      // 14
	cout << (a | b) << endl;
	cout << "---" << endl;

	// 2. 设置标记位
	int c = 0b100111;
	//      0b101111;
	cout << (c | (0b1000)) << endl;
	cout << "---" << endl;

	// 3. 置空标记位
	// 0b100111
	int d = 0b000001;
	cout << ((c | d) - d) << endl;
	cout << "---" << endl;

	// 4. 低位连续0变成1
	int e = 0b1010010000;
	// e-1= 0b1010001111;
	//   -> 0b1010011111;
	int f = 0b1010011111;
	cout << f << endl;
	cout << (e | (e - 1)) << endl;


	return 0;
}