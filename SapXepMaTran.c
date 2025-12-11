

#include <stdio.h>

void swap (int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++) {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Test %d:\n", k);

        for (int i1 = 0; i1 < m; i1++) {
            for (int j1 = 0; j1 < n; j1++) {
                for (int i2 = i1; i2 < m; i2++) {
                    for (int j2 = j1; j2 < n; j2++) {
                        if (a[i1][j1] > a[i2][j2]) {
                            swap(&a[i1][j1], &a[i2][j2]);
                        }
                    }
                }
                printf("%d ", a[i1][j1]);
            }
            printf("\n");
        }
    }
}