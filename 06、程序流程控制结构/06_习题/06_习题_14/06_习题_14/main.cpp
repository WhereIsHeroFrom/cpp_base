/*
HDOJ 2004 成绩转换
https://acm.hdu.edu.cn/showproblem.php?pid=2004

输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
90~100为A;
80~89为B;
70~79为C;
60~69为D;
0~59为E;

输入：反复输入一个整数n
输出：根据规则输出字符，如果不在0-100范围内，输出 Score is error!
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
