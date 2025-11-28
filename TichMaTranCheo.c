#include <stdio.h>

int main() {
    int o;
    scanf("%d", &o);
    for (int t = 1; t <= o; t++) {
        int n;
        scanf("%d", &n);

        int a[n][n], b[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++)  {
                a[i][j] = j + 1;
            }
            for (int j = i + 1; j < n; j++) {
                a[i][j] = 0;
            }
        }

        printf("Test %d:\n", t);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = a[j][i];
            }
        }

        int c[n][n];
        int kq = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                kq = 0;
                for (int k = 0; k < n; k++) {
                    kq += a[i][k] * b[k][j];
                }
                c[i][j] = kq;
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