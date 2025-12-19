#include <stdio.h>
#include <stdlib.h>

int cmpa(const void* a, const void* b) {
    return (*(int*)a > *(int*)b) - (*(int*)a < *(int*)b);
}

int cmpb(const void* a, const void* b) {
    return (*(int*)a < *(int*)b) - (*(int*)a > *(int*)b);
}

int main() {
    int o;
    scanf("%d", &o);
    for (int t = 0; t < o; t++) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        qsort(a, n, sizeof(int), cmpa);
        qsort(b, n, sizeof(int), cmpb);

        printf("Test %d:\n", t + 1);
        for (int i = 0; i < n * 2; i++) {
            if (i % 2 == 0) {
                printf("%d ", a[i / 2]);
            } else {
                printf("%d ", b[(i - 1) / 2]);
            }
        }

        printf("\n");
    }
}