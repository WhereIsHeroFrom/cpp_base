#include <iostream>
using namespace std;

int main() {
	bool flag1 = false;  // ¼Ù
	bool flag2 = true;   // Õæ
	cout << flag1 << endl << flag2 << endl;
	flag1 = !flag1;
	cout << flag1 << endl << flag2 << endl;
	cout << sizeof(bool) << endl;
	return 0;
}
