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
	return a + b;
}

int max(int a, int b)
{
	if (a > b) {
		return a;
	}
	return b;
}

int max1(int a, int b)
{
	return a > b ? a : b;
}

int main() {
	return 0;
}
