/*
HDOJ 2052 Picture
https://acm.hdu.edu.cn/showproblem.php?pid=2052

���룺�������� n �� m
��������һ�� m x n �ľ���

3 2

+---+
|   |
|   |
+---+
*/

#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        // 1����һ��
        cout << '+';
        for (int i = 0; i < n; ++i) {
            cout << '-';
        }
        cout << '+' << endl;
        // 2���м����
        for (int i = 0; i < m; ++i) {
            cout << '|';
            for (int j = 0; j < n; ++j) {
                cout << ' ';
            }
            cout << '|' << endl;
        }
        // 3�����һ��
        cout << '+';
        for (int i = 0; i < n; ++i) {
            cout << '-';
        }
        cout << '+' << endl;
        cout << endl;
    }
    return 0;
}
