#include <iostream>
using namespace std;

int main() {
	// 1. ����Ķ���
	// �������� ������[���� / �������ʽ];
	int a[1024] = {1,2,3,45};
	double b[520];
	char c[1314];
	// double a[1024]; ����
	// a[0] a[1] a[2]
	// int n = 1000;
	// int d[n];   ����
	int x1[10], x2[20], x3[30], x4, x5, x6[100];

	// 2. ����Ԫ�ط���
	// ������[ �±� ]
	for (int i = 0; i < 4; ++i) {
		cout << a[i] << endl;
	}

	// 3. �������
	// ����һ�� n(n < 100)���� n ������������������ n ����
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