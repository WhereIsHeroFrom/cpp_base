#include <iostream>
using namespace std;

/*
	1、返回值类型
	2、函数名
	3、参数列表
	4、函数体
	5、return 表达式

返回值类型 函数名(参数列表)
{
	  函数体
	  return 表达式
}
*/

int add(int a, int b) {
	// ...
	return a + b;
}

int max(int a, int b) {
	/*
	if (a > b) {
		return a;
	}
	return b;
	*/
	return a > b ? a : b;
}

int sum(int n) {
	/*int ret = 0;
	for (int i = 1; i <= n; ++i) {
		ret += i;
	}
	return ret;
	*/
	return (1 + n) * n / 2;
}

int main() {
	// 1. 加法的调用
	int a = add(1, 7);  // 1 + 7
	int b = add(a, 9);  // a + 9
	cout << a << endl;

	// 2. 最大值的调用
	int c = max(a, b);

	// 3. 求 1 到 n 的和
	int n;
	cin >> n;
	int d = sum(n);
	cout << d << endl;
	return 0;
}
