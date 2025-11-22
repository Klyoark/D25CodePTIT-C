#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    int a[m][m];

    int tmp;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
        int tmp = a[i][i];
        a[i][i] = a[i][m - 1 - i];
        a[i][m - 1 - i] = tmp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
}