/*
HDOJ 2099 整除的尾数
https://acm.hdu.edu.cn/showproblem.php?pid=2099


*/

#include <iostream>
using namespace std;

// a=200, b=40, 返回值[00, 40, 80], *returnSize = 3
int* calcTail(int a, int b, int* returnSize) {    // 1、返回值代表结果数组的首地址，returnSize 是外部传进来的一个地址
    *returnSize = 0;                              // 2、对外部传进来的数组大小，进行初始化
    int* ret = new int[100];                      // 3、申请一个数组内存，最多100个元素
    for (int i = 0; i < 100; ++i) {
        if ((a * 100 + i) % b == 0) {             // 4、枚举所有的末两位，并且判断是否整除，如果整除则塞入结果数组
            ret[(*returnSize)++] = i;             // 5、(*returnSize)++ 代表将数组的大小 + 1
        }
    }
    return ret;
}


int main() {
    int a, b;
    while (cin >> a >> b) {
        if (!a && !b) {
            break;
        }
        int size;
        int* ret = calcTail(a, b, &size);
        for (int i = 0; i < size; ++i) {
            if (i) {
                cout << " ";
            }
            if (ret[i] < 10) {
                cout << "0";
            }
            cout << ret[i];
        }
        cout << endl;
        delete[] ret;
    }
    return 0;
}
