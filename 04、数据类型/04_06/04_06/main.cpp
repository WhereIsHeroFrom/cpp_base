#include <iostream>
#include <string>
using namespace std;

/*
char ������[] = "�ַ�������";

*/
int main() {
	char a[] = "Ӣ���㷨����";
	cout << sizeof(a) << endl;
	cout << a << endl;

	string b = "ҹ���˾�д�㷨";
	cout << b + ":" << endl;

	return 0;
}