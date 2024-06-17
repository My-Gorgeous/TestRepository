/*
9、编写一个自定义函数：int f(char x, int N)，f( )的功能是：
对给定的字符c和整数N，用c代表的符号打印一个N行的图案，每行开头没有任何空格。
*/
#include <iostream>
using namespace std;

int f(char x, int N) {
    int i, j;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}

int main() {
    f('*', 5);
    return 0;
}