/*
HDOJ 2039 三角形
https://acm.hdu.edu.cn/showproblem.php?pid=2039

输入：输入 t 组数据，每组数据是三个数 a b c
输出：对于每组数据，如果三个数能够组成三角形，就输出 YES；否则输出 NO

*/

#include <iostream>
#include <algorithm>
using namespace std;

double a[3];

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] + a[1] > a[2]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
