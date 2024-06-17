/*
5、[900, 1000]间有偶数个因子（这里因子不含1和自身）的数有多少个，其中最小的一个？
*/
#include <cmath>
#include <iostream>
using namespace std;

void main() {
    int i, j, n = 0;
    for (i = 1000; i >= 900; i--) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                n++;
            }
        }
        if (n % 2 == 0) {
            cout << i << endl;
        }
    }
}
