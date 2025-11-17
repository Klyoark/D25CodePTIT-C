#include <stdio.h>

int main() {
    int m, n, a, b;
    scanf("%d %d", &m, &n);

    int x[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    scanf("%d %d", &a, &b);
    a--;
    b--;

    int tmp;
    for (int i = 0; i < n; i++) {
        tmp = x[a][i];
        x[a][i] = x[b][i];
        x[b][i] = tmp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

}