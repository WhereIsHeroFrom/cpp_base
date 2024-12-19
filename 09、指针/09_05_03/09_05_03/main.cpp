#include <iostream>

using namespace std;

/*
指针常量          tpye* const        指针值是一个常量                指针无法被赋值
常量指针          const type*        指向常量的指针                  指针解引用后无法被赋值
常量指针常量      const type* const  指针值和指针指向的值都是常量    指针和解引用都无法被赋值
*/

int main() {
    int a = 1;
    int b = 2;
    // 常量指针常量
    const int* const p = &a;
    // *p = 6;  错误
    // p = &b;  错误

    return 0;
}
