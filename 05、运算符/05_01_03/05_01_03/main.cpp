#include <iostream>
using namespace std;

int main() {
	int i = 6;
	i++;  // i = i + 1;
	cout << i << endl;
	++i;  // i = i + 1;
	cout << i << endl;

	int j = 8;
	int x = i++;    // 先把值给到 x，再执行递增
	int y = ++j;    // 先执行递增，再把值给到y （效率稍微高一点点）
	cout << x << endl;
	cout << y << endl;

	int z = (i++) + (++i); // 9 + 11 = 20
	cout << z << endl;

	i--;  // i = i - 1;
	--i;  // i = i - 1;


	return 0;
}