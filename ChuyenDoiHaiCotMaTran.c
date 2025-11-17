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
    for (int i = 0; i < m; i++) {
        tmp = x[i][a];
        x[i][a] = x[i][b];
        x[i][b] = tmp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

}