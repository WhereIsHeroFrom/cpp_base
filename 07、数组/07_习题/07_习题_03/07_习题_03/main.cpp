/*
HDOJ 2022 海选女主角
https://acm.hdu.edu.cn/showproblem.php?pid=2022

给定一个 m x n 的矩阵
找出矩阵中绝对值最大的数
如果数值相等，则返回行号最小的，如果行号相等，则返回列号最小的

输入：反复输入 m 和 n，以及 m x n 的矩阵。
输出：行号、列号 以及 绝对值最大的那个数
*/

#include <iostream>
#include <cmath>
using namespace std;

int a[1001][1001];

int main() {
    int m, n;
    while (cin >> m >> n) {
        int max = -1, r, c;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int x = abs(a[i][j]);
                if (x > max) {
                    max = x;
                    r = i;
                    c = j;
                }
            }
        }
        cout << (r + 1) << ' ' << (c + 1) << ' ' << a[r][c] << endl;
    }



    return 0;
}
