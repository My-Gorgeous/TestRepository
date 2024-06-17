/*
6、编写一个自定义函数：int f(int M, int N)，
f()的功能是：对给定的正整数M和N，找出满足方程“7x+4y=M”的正整数解中x是偶数且y是奇数的解，
其中：x,y属于[1，N]的范围。
要求：若M和N不都是正整数，则结束函数并返回－1；只有M和N都是正整数时，才继续求解操作，用二重循环进行求解：
（1）在函数中输出满足条件的正整数解x和y
（2）并且使函数值返回满足条件的正整数解的组数
*/
#include <iostream>
using namespace std;

int f(int M, int N) {
    int x, k = 0;
    if (M <= 0 || N <= 0) {
        return -1;
    }
    for (x = 2; (M - 7 * x > 0) && (x <= N); x += 2) {
        if ((M - 7 * x) % 4 == 0) {
            if (((M - 7 * x) / 4) % 2 != 0) {
                cout << "x = " << x << "\t"
                     << "y = " << (M - 7 * x) / 4 << endl;
                k++;
            }
        }
    }
    return k;
}

void main() {
    int M, N;
    cout << "整数M = ";
    cin >> M;
    cout << "整数N = ";
    cin >> N;
    if (f(M, N) == -1) {
        cout << "请输入正整数";
    } else {
        cout << f(M, N);
    }
}
