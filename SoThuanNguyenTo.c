#include <stdio.h>

int f[1000005] = {0};

int nto(int n) {
    if (n <= 1) { 
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int check(int n) {
    if (!nto(n)) {
        return 0;
    }
    int sum = 0;
    int cs;
    while (n > 0) {
        cs = n % 10;
        if (cs != 2 && cs != 3 && cs != 5 && cs != 7) {
            return 0;
        }
        sum += cs;
        n /= 10;
    }

    if (!nto(sum)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        int s = 0;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++) {
            if (check(i)) {
                s++;
            }
        }
        printf("%d\n", s);
    }
}
