#include <iostream>
using namespace std;

string getHex(int x) {
    char buff[10];
    sprintf_s(buff, "%X", (x & 0xFFFF));
    return (string)buff;
}

int main() {
    int a[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j) {
                cout << ",";
            }
            int *p = &a[i][j];
            cout << getHex( (int)p);
        }
        cout << endl;
    }
    // 指针数组
    int* q[3] = { &a[0][0], &a[1][0], &a[2][0] };
    // 数组指针
    int(*p)[4];
    p = &a[0];

    cout << "1、指针 + i" << endl;
    // q + i \ p + i
    cout << "数组指针" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(p + i));
        cout << "第" << i << "个[4]数组的地址是" << s << endl;
    }
    cout << "指针数组（没啥用）" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(q + i));
        cout << "第" << i << "个q元素的地址是" << s << endl;
    }

    cout << "2、*(指针 + i)" << endl;
    // *(q + i)  \   *(p + i)
    cout << "数组指针" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)*(p + i));
        cout << "a数组的第" << i << "行第 0 个元素的地址是" << s << endl;
    }
    cout << "指针数组" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)*(q + i));
        cout << "a数组的第" << i << "行第 0 个元素的地址是" << s << endl;
    }

    cout << "3、*(指针 + i) + j" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(*(p + i) + 1) );
        cout << "a数组的第" << i << "行第 1 个元素的地址是" << s << endl;
    }
    cout << "指针数组" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(*(q + i) + 2) );
        cout << "a数组的第" << i << "行第 2 个元素的地址是" << s << endl;
    }


    return 0;
}
