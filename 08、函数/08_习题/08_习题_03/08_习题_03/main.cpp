/*
HDOJ 2000 ASCII码排序
https://acm.hdu.edu.cn/showproblem.php?pid=2000

输入：一个三个字符的字符串
输出：输出三个字符排序后的结果，并用空格进行分割

*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        sort(s.begin(), s.end());
        cout << s[0] << ' ' << s[1] << ' ' << s[2] << endl;
    }
    return 0;
}
