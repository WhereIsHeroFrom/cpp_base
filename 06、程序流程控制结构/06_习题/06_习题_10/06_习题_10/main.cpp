/*
HDOJ 2096 小明A+B
https://acm.hdu.edu.cn/showproblem.php?pid=2096

输入：先输入一个t，然后t组数据，每组数据输入a和b；
输出：输出 t 行，每一行代表 a 和 b 的和，并且模上100；
*/

#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int c = (a % 100 + b % 100) % 100;
        cout << c << endl;
    }
    return 0;
}
