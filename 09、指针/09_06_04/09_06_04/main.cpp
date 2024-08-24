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
    // ָ������
    int* q[3] = { &a[0][0], &a[1][0], &a[2][0] };
    // ����ָ��
    int(*p)[4];
    p = &a[0];

    cout << "1��ָ�� + i" << endl;
    // q + i \ p + i
    cout << "����ָ��" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(p + i));
        cout << "��" << i << "��[4]����ĵ�ַ��" << s << endl;
    }
    cout << "ָ�����飨ûɶ�ã�" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(q + i));
        cout << "��" << i << "��qԪ�صĵ�ַ��" << s << endl;
    }

    cout << "2��*(ָ�� + i)" << endl;
    // *(q + i)  \   *(p + i)
    cout << "����ָ��" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)*(p + i));
        cout << "a����ĵ�" << i << "�е� 0 ��Ԫ�صĵ�ַ��" << s << endl;
    }
    cout << "ָ������" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)*(q + i));
        cout << "a����ĵ�" << i << "�е� 0 ��Ԫ�صĵ�ַ��" << s << endl;
    }

    cout << "3��*(ָ�� + i) + j" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(*(p + i) + 1) );
        cout << "a����ĵ�" << i << "�е� 1 ��Ԫ�صĵ�ַ��" << s << endl;
    }
    cout << "ָ������" << endl;
    for (int i = 0; i < 3; ++i) {
        string s = getHex((int)(*(q + i) + 2) );
        cout << "a����ĵ�" << i << "�е� 2 ��Ԫ�صĵ�ַ��" << s << endl;
    }


    return 0;
}
