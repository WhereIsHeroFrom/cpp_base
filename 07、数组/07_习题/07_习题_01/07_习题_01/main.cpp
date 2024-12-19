/*
HDOJ 2006 求奇数的乘积
https://acm.hdu.edu.cn/showproblem.php?pid=2006

输入：反复输入n，并且跟上n个数字；
输出：对于每组输入的数据，输出所有奇数的乘积
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
