#include <iostream>
using namespace std;

/*
       ^  ���
*/
int main() {
	// 1. ���Ķ���
	int a = 0b1010;
	int b = 0b0110;
	//  ^ = 0b1100;
	cout << (a ^ b) << endl;
	cout << "---" << endl;

	// 2. ���λȡ��
	int c = 0b1000101;
	//      0b0001000
	cout << c << endl;
	cout << (c ^ 0b1000) << endl;
	cout << ((c ^ 0b1000) ^ 0b1000) << endl;
	cout << "---" << endl;

	// 3. ��������
	int d = 17;
	int e = 19;
	d = d ^ e;
	e = d ^ e;  // = d' ^ e = d ^ e ^ e = d ^ 0 = d
	d = d ^ e;  // = d' ^ d = d ^ e ^ d = d ^ d ^ e = 0 ^ e = e
	cout << d << ' ' << e << endl;
	cout << "---" << endl;
	// 3.1 �κ�����0��򣬻���������
	// 3.2 ������ͬ������򣬽��Ϊ0
	// 3.3 ������㽻���ɺͽ����
	// ��򣺲�����λ�Ķ����Ƽӷ�


	// 4. ���������ε���
	
	// 5. ����
	int x = 1314;
	cout << "520" << x << endl;
	int y = (x ^ 3135);
	cout << "520" << y << endl;
	cout << "520" << (y^3135) << endl;



	return 0;
}