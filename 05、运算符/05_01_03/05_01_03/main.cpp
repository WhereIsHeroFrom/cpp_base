#include <iostream>
using namespace std;

int main() {
	int i = 6;
	i++;  // i = i + 1;
	cout << i << endl;
	++i;  // i = i + 1;
	cout << i << endl;

	int j = 8;
	int x = i++;    // �Ȱ�ֵ���� x����ִ�е���
	int y = ++j;    // ��ִ�е������ٰ�ֵ����y ��Ч����΢��һ��㣩
	cout << x << endl;
	cout << y << endl;

	int z = (i++) + (++i); // 9 + 11 = 20
	cout << z << endl;

	i--;  // i = i - 1;
	--i;  // i = i - 1;


	return 0;
}