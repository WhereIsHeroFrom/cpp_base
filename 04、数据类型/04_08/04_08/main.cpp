#include <iostream>
#include <string>
// i = input
// o = output
using namespace std;

int main() {
	// 1. 整型的输入
	int a = 5;
	cin >> a;
	cout << "a的值变成了：" << a << endl;
	// 2. 浮点型的输入
	double b = 7;
	cin >> b;
	cout << "b的值变成了：" << b << endl;
	// 3. 字符型的输入
	char c = 7;
	cin >> c;
	cout << "c的值变成了：" << c << endl;
	// 4. 字符串型
	string d = "";
	cin >> d;
	cout << "d的值变成了：" << d << endl;
	// 5. 布尔类型
	bool e = false;
	cin >> e;
	cout << "e的值变成了：" << e << endl;
    string f;
    cin >> f;
    cout << "f的值变成了：" << f << endl;
	return 0;
}