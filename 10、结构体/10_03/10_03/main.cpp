#include <iostream>
#include <string>
using namespace std;

// 1. �ṹ�嶨��
// struct �ṹ���� { �ṹ���Ա�����б� };
struct Book {
	string name;
	double price;
	int value;
};

int main() {
	Book b = {"C����", 99.99, 7};
	Book c = b;
	c.name = "C��������";
	Book* pb = &b;
	pb->name = "C++";
	cout << b.name << ' ' << b.price << ' ' << b.value << endl;

	return 0;
}