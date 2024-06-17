/*
8、写一个函数，找出给定字符串中数字字符（即’0’—‘9’这10个数字）的个数。
如：字符串“olympic2000”中，数字字符的个数为4个。
函数的原型为：int CalcDigital(char *str);
 函数参数：str为所要处理的字符串。
 函数返回值：所给字符串中数字字符的个数。
*/
#include <iostream>
using namespace std;

int CalcDigital(char* str) {
    int i, n = 0;
    for (i = 0; str[i] != 0; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            n++;
        }
    }
    return n;
}

void main() {
    char str[100];
    char* p = str;
    cin >> str;
    cout << CalcDigital(p);
}
