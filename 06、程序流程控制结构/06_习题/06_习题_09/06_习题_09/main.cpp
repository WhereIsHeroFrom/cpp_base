/*
HDOJ 1096 A+B for Input-Output Practice (VIII)
https://acm.hdu.edu.cn/showproblem.php?pid=1096

输入：输入一个t，代表有t组数据；每组数据输入一个n，输入n个数；
输出：输出 t 个数，代表每组数据的元素和，且 t 个数之间加上一个换行；
*/

#include <iostream>
using namespace std;

int main() {
    int t, n, x, sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
        if (t) {
            cout << endl;
        }
    }
    return 0;
}
