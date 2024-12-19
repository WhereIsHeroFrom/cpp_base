/*
HDOJ 2055 An easy problem
https://acm.hdu.edu.cn/showproblem.php?pid=2055

定义 f(A) = 1, f(a) = -1, f(B) = 2, f(b) = -2, ... f(Z) = 26, f(z) = -26;
输入：输入一个t，代表t组数据，每组数据输入字符 x 和整数 y
输出：对于每组数据，输出 y+f(x) 的值
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[3];
        char x;
        int y;
        int ans = 0;
        cin >> s;
        x = s[0];
        cin >> y;
        // y + f(x)
        if (x >= 'A' && x <= 'Z') {
            ans = y + (x - 'A' + 1);
        }
        else if (x >= 'a' && x <= 'z') {
            ans = y - (x - 'a' + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
