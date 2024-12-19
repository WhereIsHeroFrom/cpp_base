#include <iostream>
#include <string>
using namespace std;

// 1. 结构体定义
// struct 结构体名 { 结构体成员变量列表 };
struct Book {
	string name;
	double price;
	int value;
};

int main() {
	Book b = {"C语言", 99.99, 7};
	Book c = b;
	c.name = "C语言入门";
	Book* pb = &b;
	pb->name = "C++";
	cout << b.name << ' ' << b.price << ' ' << b.value << endl;

	return 0;
}