/*
HDOJ 2021 发工资咯：）
https://acm.hdu.edu.cn/showproblem.php?pid=2021

如果每个老师的工资额都知道，最少需要准备多少张人民币，才能在给每位老师发工资的时候都不用老师找零呢？
这里假设老师的工资都是正整数，单位元，人民币一共有100元、50元、10元、5元、2元和1元六种。

输入：反复输入一个整数n（n<100），表示老师的人数，然后是n个老师的工资。n=0表示输入的结束，不做处理。
输出：输出一个整数 x, 表示至少需要准备的人民币张数。

*/

#include <iostream>
using namespace std;

// 753 = 7 + 1 + 1 + 1 = 10
int calc(int n) {
    int b[] = { 100, 50, 10, 5, 2, 1 };
    int cnt = 0;
    for (int i = 0; i < 6; ++i) {
        int x = n / b[i];
        cnt += x;
        n -= x * b[i];
    }
    return cnt;
}

int main() {
    int n;
    int x;
    while (cin >> n && n) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += calc(x);
        }
        cout << sum << endl;
    }
    return 0;
}
