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

// 2. �����ṹ��

int main() {
	// 2.1 
	Book c;
	c.name = "C���Գ������";
	c.price = 39.99;
	c.value = 10;
	cout << c.name << ' ' << c.price << ' ' << c.value << endl;
	
	// 2.2
	Book py = { "Python���", 1999, 10 };
	cout << py.name << ' ' << py.price << ' ' << py.value << endl;

	// 2.3 
	cpp.name = "C++��������";
	cpp.price = 9999999;
	cpp.value = 10000000;
	cout << cpp.name << ' ' << cpp.price << ' ' << cpp.value << endl;

	return 0;
}