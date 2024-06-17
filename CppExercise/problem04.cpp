/*
4、求1000之内的完全数。
说明：完全数就是: 除了它本身以外所有因子之和等于其本身,例如:6=1+2+3。
*/
#include <cmath>
#include <iostream>
using namespace std;

void main() {
    int i, j, sum = 0;
    for (i = 6; i <= 1000; i++) {
        for (j = 1; j < i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (i == sum) {
            cout << i << "\t";
        }
		sum = 0;
    }
}
