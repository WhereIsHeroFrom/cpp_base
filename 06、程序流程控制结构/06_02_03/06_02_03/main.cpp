#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		/* 1. д��1
		int sum = 0;
		for (int i = 1; i <= n; ++i) {
			sum += i;
		}
		cout << sum << endl;
		*/
		/* 2. д��2
		int sum = 0;
		int i = 1;
		for (; i <= n; ++i) {
			sum += i;
		}
		cout << sum << endl;
		*/
		/* 3. д��3
		int sum;
		int i;
		for (sum = 0, i = 1; i <= n; ++i) {
			sum += i;
		}
		cout << sum << endl;
		*/
		/* 4. д��4:��ѭ��
		int sum;
		int i;
		for (sum = 0, i = 1; ; ++i) {
			sum += i;
		}
		cout << sum << endl;
		*/
		int sum;
		int i;
		for (sum = 0, i = 1; i <= n; ) {
			sum += i;
			++i;
		}
		cout << sum << endl;
	}
	return 0;
}