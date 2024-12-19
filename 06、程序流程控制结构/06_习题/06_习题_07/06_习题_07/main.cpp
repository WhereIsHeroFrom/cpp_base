/*
HDOJ 1094 A+B for Input-Output Practice (VI)
https://acm.hdu.edu.cn/showproblem.php?pid=1094

输入：输入一个n，然后n个整数
输出：n行，每行一个整数，代表所有这一行输入的元素之和
*/

#include <iostream>
using namespace std;

int main() {
    int n, x, sum;
    while (cin >> n) {
        sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
