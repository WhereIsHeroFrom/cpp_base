/*
HDOJ 2006 �������ĳ˻�
https://acm.hdu.edu.cn/showproblem.php?pid=2006

���룺��������n�����Ҹ���n�����֣�
���������ÿ����������ݣ�������������ĳ˻�
*/

#include <iostream>
using namespace std;

int a[1000000];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int prod = 1;
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2) {
                prod *= a[i];
            }
        }
        cout << prod << endl;
    }

    return 0;
}
