#include <iostream>
using namespace std;

int main() {
	// 1. 二维数组的定义
	// 数组类型 数组名[行][列]
	int arr[3][4];
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			arr[i][j] = i * j;
		}
	}
	int b[4][4] = {
		{1, 2},
		{2, 3},
		{6,7,8},
		{9,1}
	};
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << b[i][j] << ' ';
		}
		cout << endl;
	}



	return 0;
}