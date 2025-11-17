#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n , &m);

    int a[1000] = {0}, b[1000] = {0}, x = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        a[x] = 1;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        b[x] = 1;
    }

    for (int i = 0; i < 1000; i++) {
        if (a[i] && b[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for (int i = 0; i < 1000; i++) {
        if (a[i] && !b[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for (int i = 0; i < 1000; i++) {
        if (!a[i] && b[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}