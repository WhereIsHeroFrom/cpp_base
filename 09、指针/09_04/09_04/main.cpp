#include <iostream>
using namespace std;

int main() {
	// 1. ø’÷∏’Î
	int* p = NULL;
	cout << *p << endl;

	// 2. “∞÷∏’Î
	p = (int *)0x121412;
	cout << *p << endl;

	return 0;
}