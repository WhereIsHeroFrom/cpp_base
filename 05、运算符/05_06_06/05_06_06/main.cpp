#include <iostream>
using namespace std;

/*
     x >> y    x / 2^y
*/

int main() {
	// 1. ����������
	int a = 0b111;  // 7
	a = (a >> 1);
	cout << a << endl;

	// 2. ����������
	int b = -1;
	cout << (-1 >> 1) << endl;
	// 11111111 11111111 11111111 11111111  =-1
	// 111111111 11111111 11111111 1111111  =-1

	// 3. ȥ���� k λ
	int c = 0b10000101;
	cout << (c >> 7) << endl;

	// 4. ȡ���ڵ�kλ��ֵ
	int d = 0b101010101;
	cout << ((d >> 4) & 1) << endl;
 

	return 0;
}