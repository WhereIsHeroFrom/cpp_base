#include <iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 9;
	cout << a % b << endl;   // 1

	a = 100;
	b = -9;
	cout << a % b << endl;   // 1

	a = -100;
	b = 9;
	cout << a % b << endl;   // -1

	a = -100;
	b = -9;
	cout << a % b << endl;   // -1
	// -1
	// 100 =   -9*��-11�� + 1

	// 1��ȡģ���źͱ�����һ��

	return 0;
}