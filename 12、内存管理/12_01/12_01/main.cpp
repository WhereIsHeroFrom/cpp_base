#include <iostream>
using namespace std;

// 代码区、全局区、栈区、堆区

void printMessage() {
    cout << "Hello world!" << endl;
}
int main() {
    printMessage();
    while(1) {}
    return 0;
}