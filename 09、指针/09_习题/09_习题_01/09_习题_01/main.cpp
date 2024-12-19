/*
HDOJ 2081 手机短号
https://acm.hdu.edu.cn/showproblem.php?pid=2081

输入：输入 t 组数据，每组数据是一个11位的手机号
输出：每组数据输出一个6，再跟上手机号的末五位
*/

#include <iostream>
using namespace std;


//             s+6
// s = 123456   78901
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[12];
        cin >> s;
        cout << '6' << s + 6 << endl;
    }
    return 0;
}
