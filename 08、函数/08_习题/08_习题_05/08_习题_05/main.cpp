/*
HDOJ 2012 �����ж�
https://acm.hdu.edu.cn/showproblem.php?pid=2012

���ڱ��ʽn^2+n+41
��n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)
�ж��ñ��ʽ��ֵ�Ƿ�Ϊ����

���룺�������� x �� y���� x �� y ��Ϊ 0 ��ʱ�򣬳������
�����������㶼������������� OK��������� Sorry

*/

#include <iostream>
using namespace std;

//
//   x   ��һ�����ӽ� i����ô��Ȼ����һ�����ӽ� x/i
//    i �� x/i ��Ȼ�и���С��ϵ�����۴�С��ϵ�����������Ƶ��� i <= ����x
bool isPrime(int x) {
    for (int i = 2; i*i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int x, y;
    while (cin >> x >> y) {
        if (!x && !y) {
            break;
        }
        bool flag = false;
        for (int i = x; i <= y; ++i) {
            int z = i * i + i + 41;
            if (!isPrime(z)) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << "OK" << endl;
        }
        else {
            cout << "Sorry" << endl;
        }
    }
    return 0;
}
