#include <iostream>
#include <string>
// i = input
// o = output
using namespace std;

int main() {
	// 1. ���͵�����
	int a = 5;
	cin >> a;
	cout << "a��ֵ����ˣ�" << a << endl;
	// 2. �����͵�����
	double b = 7;
	cin >> b;
	cout << "b��ֵ����ˣ�" << b << endl;
	// 3. �ַ��͵�����
	char c = 7;
	cin >> c;
	cout << "c��ֵ����ˣ�" << c << endl;
	// 4. �ַ�����
	string d = "";
	cin >> d;
	cout << "d��ֵ����ˣ�" << d << endl;
	// 5. ��������
	bool e = false;
	cin >> e;
	cout << "e��ֵ����ˣ�" << e << endl;
    string f;
    cin >> f;
    cout << "f��ֵ����ˣ�" << f << endl;
	return 0;
}