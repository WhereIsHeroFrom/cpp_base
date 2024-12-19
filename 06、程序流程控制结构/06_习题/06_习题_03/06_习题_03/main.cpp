/*
HDOJ 1090 A+B for Input-Output Practice (II)
https://acm.hdu.edu.cn/showproblem.php?pid=1090

输入：输入一个n，然后输入n组数据，每组数据是a和b
输出：n行，每行是 a+b 的和

*/

#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
