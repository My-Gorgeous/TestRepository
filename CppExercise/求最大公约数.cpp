#include <stdio.h>
int gcd(int m, int n) {
    int r;
    if (m == 0 || n == 0) {
        r = 0;
        return r;
    }
    if (m > n) {
        while (n != 0) {
            r = m % n;
            m = n;
            n = r;
        }
        return m;
    }
    if (n > m) {
        while (m != 0) {
            r = n % m;
            n = m;
            m = r;
        }
        return n;
    }
}
int main() {
    int a, b;
    scanf("%d,%d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}
