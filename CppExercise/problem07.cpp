/*
7、写一个函数：找出一个整数数组中第二大的数
*/
#include <iostream>
#define M 5
using namespace std;

void main() {
    int a[M], max, maxi, i, min;
    cout << "请输入" << M << "个整数";
    for (i = 0; i < M; i++) {
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < M; i++) {
        if (a[i] > max) {
            max = a[i];
            maxi = i;
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    a[maxi] = min;
    max = min;
    for (i = 0; i < M; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout << "第二大的数为" << a[i];
}