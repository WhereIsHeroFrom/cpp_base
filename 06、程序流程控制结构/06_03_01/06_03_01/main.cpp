#include <iostream>
using namespace std;

int main() {
	// 1. while �е� break;
	int cnt = 0;
	while (1) {
		cnt++;
		cout << "��ǰ����Ϊ��" << cnt << endl;
		if (cnt > 20) {
			break;
		}
	}
	cout << "----------------" << endl;

	// 2. for �е�break;
	cnt = 20;
	for (int i = 1; ; ++i) {
		cout << "��ǰ����Ϊ��" << i << endl;
		if (i > cnt) {
			break;
		}
	}

	// 3. switch case �е� break
	int a = 1;
	switch (a) {
	case 1:
		cout << "Ӣ���㷨����" << endl;
		break;
	case 2:
		cout << "ҹ���˾�д�㷨" << endl;
	}


	return 0;
}