/*
HDOJ 2071 Max Num
https://acm.hdu.edu.cn/showproblem.php?pid=2071

输入：输入一个t，代表t组数据，每组数据输入一个n，以及n个浮点数
输出：对于每组数据，输出这n个数中的最大值

*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        double x;
        double max = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x > max) {
                max = x;
            }
        }
        printf("%.2lf\n", max);
    }
    return 0;
}
