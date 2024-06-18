/*
HDOJ 2007 ƽ������������
https://acm.hdu.edu.cn/showproblem.php?pid=2007

���룺�������� n �� m��
�������� n �� m �е�����ż����ƽ���ͣ��Լ�����������������

*/

#include <iostream>
using namespace std;

int a[1000000];

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n > m) {
            int tmp = n; n = m; m = tmp;
        }
        int cnt = m - n + 1;
        for (int i = n; i <= m; ++i) {
            a[i - n] = i;
        }
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < cnt; ++i) {
            if (a[i] % 2 == 0) {
                sum1 += a[i] * a[i];
            }
            else {
                sum2 += a[i] * a[i] * a[i];
            }
        }
        cout << sum1 << ' ' << sum2 << endl;

    }
    return 0;
}
