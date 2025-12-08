#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
    if (n <= 1) { 
        return 0;
    }
    if (n % 2 == 0) { 
        return n == 2;
    }
    for (int i = 3; i * 1LL * i <= n; i += 2) {
        if (n % i == 0) { return 0;
        }
    }
    return 1;
}

int goodDigit(int d) { 
    return d == 2 || d == 3 || d == 5 || d == 7; 
}

int isPurePrime(int n) {
    if (!isPrime(n)) {
        return 0;
}

    int sum = 0, x = n;

    while (x > 0) {
        int d = x % 10;
        if (!goodDigit(d)) return 0;
        sum += d;
        x /= 10;
    }

    return isPrime(sum);
}

int cmpInt(const void* a, const void* b) {
    int x = *(int*)a, y = *(int*)b;
    return (x > y) - (x < y);
}

int pureNums[300000];
int pureCount = 0;

void generate(long long cur, int maxDigits) {
    if (cur > 0 && cur <= 1000000000) {
        if (isPurePrime((int)cur)) pureNums[pureCount++] = (int)cur;
    }

    if (maxDigits == 9) return;
    if (cur > 1000000000) return;

    int digits[] = {2, 3, 5, 7};
    for (int i = 0; i < 4; i++) {
        long long next = cur * 10 + digits[i];
        generate(next, maxDigits + 1);
    }
}

int lowerBound(int arr[], int n, int x) {
    int l = 0, r = n;
    while (l < r) {
        int m = (l + r) / 2;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m;
    }
    return l;
}

int upperBound(int arr[], int n, int x) {
    int l = 0, r = n;
    while (l < r) {
        int m = (l + r) / 2;
        if (arr[m] <= x)
            l = m + 1;
        else
            r = m;
    }
    return l;
}

int main() {
    generate(0, 0);

    qsort(pureNums, pureCount, sizeof(int), cmpInt);

    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int L = lowerBound(pureNums, pureCount, a);
        int R = upperBound(pureNums, pureCount, b);

        printf("%d\n", R - L);
    }
    return 0;
}
