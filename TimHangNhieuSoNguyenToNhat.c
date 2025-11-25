#include <stdio.h>

int f[100001];
void sieve() {
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 100000; i++) {
        if (!f[i]) {
            for (int j = i * i; j <= 100000; j += i) {
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

    int max_num = 0;
    int cur_max = 0;
    int best_row = 0;

    for (int i = 0; i < n; i++) {
        cur_max = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (!f[a[i][j]]) {
                cur_max++;
            }
        }
        if (cur_max > max_num) {
            max_num = cur_max;
            best_row = i;
        }
    }

    printf("%d\n", best_row + 1);
    for (int k = 0; k < n; k++) {
        if (!f[a[best_row][k]]) {
            printf("%d ", a[best_row][k]);
        }
    }
}