#include <iostream>
using namespace std;

int main() {
	// 1. while 中的 break;
	int cnt = 0;
	while (1) {
		cnt++;
		cout << "当前次数为：" << cnt << endl;
		if (cnt > 20) {
			break;
		}
	}
	cout << "----------------" << endl;

	// 2. for 中的break;
	cnt = 20;
	for (int i = 1; ; ++i) {
		cout << "当前次数为：" << i << endl;
		if (i > cnt) {
			break;
		}
	}

	// 3. switch case 中的 break
	int a = 1;
	switch (a) {
	case 1:
		cout << "英雄算法联盟" << endl;
		break;
	case 2:
		cout << "夜深人静写算法" << endl;
	}


	return 0;
}