/*
1、求Sn=a+aa+aaa+aaaa+…+aa…a（n个a）之值，其中a是一个数字，n表示a的位数。
例如：2+22+222+2222 (此时a=2,n=4）
*/
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int a;
    int n;
    int sum = 0;
    cin >> a >> n;
    for (int i = 1; i <= n; ++i) {
        int num = 0;
        for (int j = 1; j <= i; ++j) {
            num = num + a * pow(10, j - 1);
        }
        sum = sum + num;
    }
    cout << sum;
}
