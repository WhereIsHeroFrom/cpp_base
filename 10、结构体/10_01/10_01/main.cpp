#include <iostream>
#include <string>
using namespace std;

// 1. 结构体定义
// struct 结构体名 { 结构体成员变量列表 };
struct Book {
	string name;
	double price;
	int value;
}cpp;

// 2. 创建结构体

int main() {
	// 2.1 
	Book c;
	c.name = "C语言程序设计";
	c.price = 39.99;
	c.value = 10;
	cout << c.name << ' ' << c.price << ' ' << c.value << endl;
	
	// 2.2
	Book py = { "Python编程", 1999, 10 };
	cout << py.name << ' ' << py.price << ' ' << py.value << endl;

	// 2.3 
	cpp.name = "C++零基础编程";
	cpp.price = 9999999;
	cpp.value = 10000000;
	cout << cpp.name << ' ' << cpp.price << ' ' << cpp.value << endl;

	return 0;
}