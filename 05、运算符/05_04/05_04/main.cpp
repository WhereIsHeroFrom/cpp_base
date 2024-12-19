#include <iostream>
using namespace std;

/*

&&    与
||    或
!     非

|| < && < !

*/
int main() {
	// 1. 与运算：有假必假
	cout << (0 && 0) << endl;
	cout << (0 && 2) << endl;
	cout << (2 && 0) << endl;
	cout << (2 && 2) << endl;
	cout << "---" << endl;
	// 2. 或运算：有真必真
	cout << (0 || 0) << endl;
	cout << (0 || 2) << endl;
	cout << (2 || 0) << endl;
	cout << (2 || 2) << endl;
	cout << "---" << endl;
	// 3. 非运算：非真即假，非假即真
	cout << !0 << endl;
	cout << !2 << endl;
	cout << "---" << endl;

	int a = !((5 > 4) && (7 - 8) && (0 - 1));
	cout << a << endl;

	int b = !(1 || 1 && 0);
	cout << b << endl;

	return 0;
}