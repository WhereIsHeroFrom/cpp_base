#include <iostream>
using namespace std;

int main() {
	int x;
	string y = "��ש";
	cin >> x;

	if (x & 1) {
		cout << "x ��һ����̫����~" << endl;
		y = y + "Java";
	}
	else {
		cout << "x ��һ����̫����~" << endl;
	}
	cout << y << endl;

	return 0;
}