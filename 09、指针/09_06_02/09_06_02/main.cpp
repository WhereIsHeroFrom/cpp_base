#include <iostream>

using namespace std;

int main() {
    char a[] = "I";
    char b[] = "love";
    char c[] = "you";

    char* p[3];
    p[0] = a;
    p[1] = b;
    p[2] = c;
    for (int i = 0; i < 3; ++i) {
        cout << p[i] << ' ';
    }
    cout << endl;

    int mat[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int* pmat[3];
    pmat[0] = mat[0];
    pmat[1] = mat[1];
    pmat[2] = mat[2];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << *(pmat[i] + j) << ' ';
        }
        cout << endl;
    }



    return 0;
}