/*
HDOJ 2003 求绝对值
https://acm.hdu.edu.cn/showproblem.php?pid=2003

输入：反复输入一个实数x
输出：输出 x 的绝对值，保留两位小数
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    while (cin >> x) {
        x = fabs(x);
        printf("%.2lf\n", x);
    }
    return 0;
}
