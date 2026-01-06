#include <stdio.h>

long long memo[10001] = {0};

long long NthFib(long long n) {
    if (n <= 1) {
        return n;
    }
    if (memo[n]) {
        return memo[n];
    }
    memo[n] = NthFib(n - 1) + NthFib(n - 2);
    return memo[n];
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