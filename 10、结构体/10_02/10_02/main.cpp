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

int main() {
	// 2. 创建一个结构体数组
	// Book 数组名[元素个数] = { {}, {}, {}, ... };
	Book books[3] = {
		{"C语言程序设计", 199.99, 7},
		{"Python零基础", 399.99, 9},
		{"C++零基础", 39.99, 1000000}
	};
	books[2].name = "C++入门到入土！";
	for (int i = 0; i < 3; ++i) {
		cout << books[i].name << ' ' << books[i].price << ' ' << books[i].value << endl;
	}

	return 0;
}