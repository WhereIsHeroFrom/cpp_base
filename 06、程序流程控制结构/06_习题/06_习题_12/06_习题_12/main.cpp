/*
HDOJ 2075 A|B?
https://acm.hdu.edu.cn/showproblem.php?pid=2075

���룺����һ��t������t�����ݣ�ÿ���������������� a �� b
���������ÿ�����ݣ���� aģb ���� 0����� YES��������� NO
*/

#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << (a % b == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
