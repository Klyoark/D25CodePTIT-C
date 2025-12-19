#include <stdio.h>

int memo[10001] = {0};

int NthFib(int n) {
    if (n <= 1) {
        return n;
    }
    if (memo[n]) {
        return memo[n];
    }
    return NthFib(n - 1) + NthFib(n - 2);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", NthFib(n));
    }
}