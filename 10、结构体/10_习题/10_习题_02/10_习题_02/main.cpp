/*
HDOJ 2037 ������ٲ�AC
https://acm.hdu.edu.cn/showproblem.php?pid=2037

���룺��������һ��n��������n�����䣬Ȼ������n������
��������ѡ����������������֤���е����䶼���ص�

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
