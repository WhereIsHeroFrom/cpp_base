/*
HDOJ 2000 ASCII������
https://acm.hdu.edu.cn/showproblem.php?pid=2000

���룺һ�������ַ����ַ���
�������������ַ������Ľ�������ÿո���зָ�

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
