/*
HDOJ 2004 �ɼ�ת��
https://acm.hdu.edu.cn/showproblem.php?pid=2004

����һ���ٷ��Ƶĳɼ�t������ת���ɶ�Ӧ�ĵȼ�������ת���������£�
90~100ΪA;
80~89ΪB;
70~79ΪC;
60~69ΪD;
0~59ΪE;

���룺��������һ������n
��������ݹ�������ַ����������0-100��Χ�ڣ���� Score is error!
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        char ret = '\0';
        if (x >= 90 && x <= 100) {
            ret = 'A';
        }
        else if (x >= 80 && x <= 89) {
            ret = 'B';
        }
        else if (x >= 70 && x <= 79) {
            ret = 'C';
        }
        else if (x >= 60 && x <= 69) {
            ret = 'D';
        }
        else if (x >= 0 && x <= 59) {
            ret = 'E';
        }
        if (ret == '\0') {
            cout << "Score is error!" << endl;
        }
        else {
            cout << ret << endl;
        }
    }
    return 0;
}
