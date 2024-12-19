/*
HDOJ 2007 平方和与立方和
https://acm.hdu.edu.cn/showproblem.php?pid=2007

输入：反复输入 n 和 m；
输出：输出 n 到 m 中的所有偶数的平方和，以及所有奇数的立方和

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
