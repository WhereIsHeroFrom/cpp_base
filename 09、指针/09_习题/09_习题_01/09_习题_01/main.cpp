/*
HDOJ 2081 �ֻ��̺�
https://acm.hdu.edu.cn/showproblem.php?pid=2081

���룺���� t �����ݣ�ÿ��������һ��11λ���ֻ���
�����ÿ���������һ��6���ٸ����ֻ��ŵ�ĩ��λ
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
