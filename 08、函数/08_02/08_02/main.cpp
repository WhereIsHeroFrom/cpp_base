#include <iostream>
using namespace std;

/*
	1������ֵ����
	2��������
	3�������б�
	4��������
	5��return ���ʽ

����ֵ���� ������(�����б�)
{
	  ������
	  return ���ʽ
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
	// 1. �ӷ��ĵ���
	int a = add(1, 7);  // 1 + 7
	int b = add(a, 9);  // a + 9
	cout << a << endl;

	// 2. ���ֵ�ĵ���
	int c = max(a, b);

	// 3. �� 1 �� n �ĺ�
	int n;
	cin >> n;
	int d = sum(n);
	cout << d << endl;
	return 0;
}
