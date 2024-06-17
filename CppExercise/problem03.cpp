/*
3、n为一个整数(小于10万），它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
*/
#include <cmath>
#include <iostream>
using namespace std;

int judge(int a) {
    int b = sqrt(a);
    if (a == b * b) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    int i, flag = 1;
    for (i = 0; i < 100000; i++) {
        if (judge(i + 100) && judge(i + 268)) {
            flag = 0;
            cout << i << "\t";
        }
        if (flag) {
            cout << "无";
        }
    }
}
