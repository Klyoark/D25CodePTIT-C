#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a > *(int*)b) - (*(int*)a < *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int T[n], D[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &T[i], &D[i]);
    }
    qsort(T, n, sizeof(int), cmp);
    qsort(D, n, sizeof(int), cmp);

    int clock = 0;
    for (int i = 0; i < n; i++) {
        if (T[i] > clock) {
            clock = T[i];
        }
        clock += D[i];
    }

    printf("%d", clock);
}
