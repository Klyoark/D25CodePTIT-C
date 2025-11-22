#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int z = 1; z <= t; z++) {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m];
        int b[m][n];
        int c[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = a[j][i];
            }
        }
        printf("Test %d:\n", z);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                c[i][j] = 0;
                for (int k = 0; k < m; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}