/*
HDOJ 2039 ������
https://acm.hdu.edu.cn/showproblem.php?pid=2039

���룺���� t �����ݣ�ÿ�������������� a b c
���������ÿ�����ݣ�����������ܹ���������Σ������ YES��������� NO

*/

#include <iostream>
#include <algorithm>
using namespace std;

double a[3];

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] + a[1] > a[2]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
