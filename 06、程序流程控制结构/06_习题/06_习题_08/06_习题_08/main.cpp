/*
HDOJ 1095 A+B for Input-Output Practice (VII)
https://acm.hdu.edu.cn/showproblem.php?pid=1095

输入：反复输入 a 和 b
输出：输出 a 和 b 的和，并且带上一个换行
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << a + b << endl;
        cout << endl;
    }
    return 0;
}
