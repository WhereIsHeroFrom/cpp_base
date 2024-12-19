#include <iostream>
using namespace std;

// 函数指针的定义
void (*fptr1) (int a, int b, int c, float d, char e);
void (*fptr2) (int a, int b, int c, float d, char e);

void func1(int a, int b, int c, float d, char e) {
    cout << "func1" << endl;
}

// 函数指针的类型定义
typedef void (*fptr) (int a, int b, int c, float d, char e);

int main() {
    fptr1 = func1;
    fptr1(1, 2, 3, 4, 5);

    fptr2 = func1;
    fptr2(9, 8, 7, 6, 5);

    fptr fp1 = func1;
    //int  x = 6;
    fp1(7, 6, 5, 4, 3);




    return 0;
}