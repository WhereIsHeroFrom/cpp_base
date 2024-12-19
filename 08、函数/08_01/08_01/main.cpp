#include <iostream>
using namespace std;

/*
	1、返回值类型
	2、函数名
	3、参数列表
	4、函数体
	5、return 表达式

返回值类型 函数名(参数列表)
{
      函数体
	  return 表达式
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
