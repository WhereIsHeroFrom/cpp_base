/*
HDOJ 1096 A+B for Input-Output Practice (VIII)
https://acm.hdu.edu.cn/showproblem.php?pid=1096

���룺����һ��t��������t�����ݣ�ÿ����������һ��n������n������
�������� t ����������ÿ�����ݵ�Ԫ�غͣ��� t ����֮�����һ�����У�
*/

#include <iostream>
using namespace std;

int main() {
    int t, n, x, sum;
    cin >> t;
    while (t--) {
        sum = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
        if (t) {
            cout << endl;
        }
    }
    return 0;
}
