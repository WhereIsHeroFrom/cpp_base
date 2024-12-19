/*
HDOJ 1091 A+B for Input-Output Practice (III)
https://acm.hdu.edu.cn/showproblem.php?pid=1091

输入：反复输入 a 和 b，当 a 和 b 都等于 0 的时候，程序结束；
输出：a 和 b 的和
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (!a && !b) {
            break;
        }
        cout << a + b << endl;
    }
    return 0;
}
