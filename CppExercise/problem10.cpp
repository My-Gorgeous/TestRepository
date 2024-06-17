/*
10、编写函数f()，计算具有n个元素的一维数组a中每组相邻两个数的差，找出其中的最大差作为函数值返回。
*/
#include <iostream>
#define M 5
using namespace std;

int f(int a[], int n) {
    int cha, i, max = 0;
    for (i = 1; i < M; i++) {
        if (a[i - 1] < a[i]) {
            cha = a[i] - a[i - 1];
        } else {
            cha = a[i - 1] - a[i];
        }
        if (cha > max) {
            max = cha;
        }
    }
    return max;
}

void main() {
    int i;
    int a[M];
    for (i = 0; i < M; i++) {
        cin >> a[i];
    }
    cout << "The result is " << f(a, M) << endl;
}