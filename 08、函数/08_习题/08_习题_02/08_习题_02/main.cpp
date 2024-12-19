/*
HDOJ 2001 计算两点间的距离
https://acm.hdu.edu.cn/showproblem.php?pid=2001

输入：输入两个坐标(x1, y1) 和 (x2, y2)
输出：输出两个坐标的欧几里得距离，并且保留两位有效数字。

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        double d = (x1 - x2)* (x1 - x2) + (y1 - y2) * (y1 - y2);
        printf("%.2lf\n", sqrt(d));
    }
    return 0;
}
