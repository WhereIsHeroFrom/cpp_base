#include <iostream>
#include <string>
using namespace std;

// 1. �ṹ�嶨��
// struct �ṹ���� { �ṹ���Ա�����б� };
struct Book {
	string name;
	double price;
	int value;
}cpp;

int main() {
	// 2. ����һ���ṹ������
	// Book ������[Ԫ�ظ���] = { {}, {}, {}, ... };
	Book books[3] = {
		{"C���Գ������", 199.99, 7},
		{"Python�����", 399.99, 9},
		{"C++�����", 39.99, 1000000}
	};
	books[2].name = "C++���ŵ�������";
	for (int i = 0; i < 3; ++i) {
		cout << books[i].name << ' ' << books[i].price << ' ' << books[i].value << endl;
	}

	return 0;
}