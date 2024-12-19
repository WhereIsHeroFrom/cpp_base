#include <iostream>
using namespace std;

// 引用    解引用

int main() {
    int a = 520;
    //int& b = a;      // 00007FF7D5C81865  lea         rax,[a]  
                       // 00007FF7D5C81869  mov         qword ptr[b], rax

    //b = 1314;        // 00007FF7D5C8186D  mov         rax,qword ptr [b]  
                       // 00007FF7D5C81871  mov         dword ptr[rax], 522h

    int* const b = &a; // 00007FF77E9B1865  lea         rax,[a]  
                       // 00007FF77E9B1869  mov         qword ptr[b], rax
    *b = 1314;         // 00007FF77E9B186D  mov         rax, qword ptr[b]
                       // 00007FF77E9B1871  mov         dword ptr[rax], 522h

    return 0;
}
