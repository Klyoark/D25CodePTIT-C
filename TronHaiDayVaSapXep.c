#include <stdio.h>
#include <stdlib.h>
int cmp_inta(const void *a, const void *b) {
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    return (int_a > int_b) - (int_a < int_b);
}

int cmp_intb(const void *a, const void *b) {
    int int_a = *(int *)a;
    int int_b = *(int *)b;
    return (int_b > int_a) - (int_b < int_a);
}

int main() {
    int t;
    scanf("%d", &t);
    for (int o = 1; o <= t; o++) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        qsort(a, n, sizeof(int), cmp_inta);
        qsort(b, n, sizeof(int), cmp_intb);

        printf("Test %d:\n", o);
        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0) {
                printf("%d ", a[i / 2]);
            } else {
                printf("%d ", b[(i - 1) / 2]);
            }
        }
        printf("\n");
    }
}