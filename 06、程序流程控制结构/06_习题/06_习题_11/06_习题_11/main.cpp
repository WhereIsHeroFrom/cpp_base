/*
HDOJ 2033 人见人爱A+B
https://acm.hdu.edu.cn/showproblem.php?pid=2033

输入：输入一个t，代表t组数据，每组数据输入两个时间，时间分别为时分秒
输出：输出t行，每一行是一个时间，代表这组数据下两个时间的加和，注意考虑进位
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    int ah, am, as;
    int bh, bm, bs;
    cin >> t;
    while (t--) {
        cin >> ah >> am >> as;
        cin >> bh >> bm >> bs;
        as += bs;
        am += bm;
        ah += bh;

        am += as / 60;
        as %= 60;

        ah += am / 60;
        am %= 60;

        cout << ah << ' ' << am << ' ' << as << endl;

    }
    return 0;
}
