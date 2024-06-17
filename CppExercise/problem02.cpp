/*
2、从键盘上输入一个正整数, 判别它是否为一回文数。
如：123321，输出yes。
*/
#include <iostream>
using namespace std;
int main() {
    int num, m, l = 0, k;
    cin >> num;
    m = num;
    while (m) {
        l = l * 10 + m % 10;
        m = m / 10;
    }
    if (l == num) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}
