#include <stdio.h>

int f[10001] = {0};
void sieve() {
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 10000; i++) {
        if (!f[i]) {
            for (int j = i * i; j <= 10000; j += i) {
                f[j] = 1;
            }
        }
    }
}   

int main() {
    sieve();
    int n;
    scanf("%d", &n);
    int a[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int s = 0;


    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!f[a[i][j]]) {
                s += a[i][j];
            }
        }
    }

    printf("%d", s);
}