/*
HDOJ 2037 今年暑假不AC
https://acm.hdu.edu.cn/showproblem.php?pid=2037

输入：反复输入一个n，代表有n个区间，然后输入n个区间
输出：输出选择最多的区间数，保证所有的区间都不重叠

*/

#include <iostream>
#include <algorithm>
using namespace std;

struct Interval {
    int s;
    int e;
}I[100];

bool cmp(const Interval& a, const Interval& b) {
    return a.e < b.e;
}

int main() {
    int n;
    while (cin >> n && n) {
        for (int i = 0; i < n; ++i) {
            cin >> I[i].s >> I[i].e;
        }
        sort(I, I + n, cmp);
        int end = -1;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (I[i].s >= end) {
                ans++;
                end = I[i].e;
            }
        }
        cout << ans << endl;

    }
    return 0;
}
