/*
HDOJ 2075 A|B?
https://acm.hdu.edu.cn/showproblem.php?pid=2075

输入：输入一个t，代表t组数据，每组数据输入两个数 a 和 b
输出：对于每组数据，如果 a模b 等于 0，输出 YES，否则输出 NO
*/

#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << (a % b == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
