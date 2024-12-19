#include <iostream>
using namespace std;

int main() {
	// 1. 数组的定义
	// 数据类型 数组名[数字 / 常量表达式];
	int a[1024] = {1,2,3,45};
	double b[520];
	char c[1314];
	// double a[1024]; 错误
	// a[0] a[1] a[2]
	// int n = 1000;
	// int d[n];   错误
	int x1[10], x2[20], x3[30], x4, x5, x6[100];

	// 2. 数组元素访问
	// 数组名[ 下标 ]
	for (int i = 0; i < 4; ++i) {
		cout << a[i] << endl;
	}

	// 3. 逆序输出
	// 输入一个 n(n < 100)，和 n 个数，请逆序输出这个 n 个数
	int n;
	int x[100];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x[i];
	}
	for (int i = n - 1; i >= 0; --i) {
		cout << x[i] << ' ';
	}
	cout << endl;


	return 0;
}