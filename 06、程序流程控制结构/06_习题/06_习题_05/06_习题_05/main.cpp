/*
HDOJ 1092 A+B for Input-Output Practice (IV)
https://acm.hdu.edu.cn/showproblem.php?pid=1092

输入：输入一个 n，然后 n 个数；当 n 等于 0 的时候，程序结束；
输出：输出这 n 个数的和；

*/

#include <iostream>
using namespace std;

int main() {
    int n, x, sum;
    while (cin >> n && n) {
        sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
