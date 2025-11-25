#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);

    int minA = 10000000, minB = 10000000;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a < minA) {
            minA = a;
        }
        if (b < minB) {
            minB = b;
        }
    }
    printf("%lld", (long long int) minA * minB);
}