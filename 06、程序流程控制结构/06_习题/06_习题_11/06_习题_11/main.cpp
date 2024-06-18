/*
HDOJ 2033 �˼��˰�A+B
https://acm.hdu.edu.cn/showproblem.php?pid=2033

���룺����һ��t������t�����ݣ�ÿ��������������ʱ�䣬ʱ��ֱ�Ϊʱ����
��������t�У�ÿһ����һ��ʱ�䣬������������������ʱ��ļӺͣ�ע�⿼�ǽ�λ
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    int ah, am, as;
    int bh, bm, bs;
    cin >> t;
    while (t--) {
        cin >> ah >> am >> as;
        cin >> bh >> bm >> bs;
        as += bs;
        am += bm;
        ah += bh;

        am += as / 60;
        as %= 60;

        ah += am / 60;
        am %= 60;

        cout << ah << ' ' << am << ' ' << as << endl;

    }
    return 0;
}
