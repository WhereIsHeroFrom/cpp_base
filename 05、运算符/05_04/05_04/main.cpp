#include <iostream>
using namespace std;

/*

&&    ��
||    ��
!     ��

|| < && < !

*/
int main() {
	// 1. �����㣺�мٱؼ�
	cout << (0 && 0) << endl;
	cout << (0 && 2) << endl;
	cout << (2 && 0) << endl;
	cout << (2 && 2) << endl;
	cout << "---" << endl;
	// 2. �����㣺�������
	cout << (0 || 0) << endl;
	cout << (0 || 2) << endl;
	cout << (2 || 0) << endl;
	cout << (2 || 2) << endl;
	cout << "---" << endl;
	// 3. �����㣺���漴�٣��Ǽټ���
	cout << !0 << endl;
	cout << !2 << endl;
	cout << "---" << endl;

	int a = !((5 > 4) && (7 - 8) && (0 - 1));
	cout << a << endl;

	int b = !(1 || 1 && 0);
	cout << b << endl;

	return 0;
}