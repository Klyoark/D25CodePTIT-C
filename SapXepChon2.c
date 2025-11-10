#include <stdio.h>

int main() {
    int a[100];
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < k - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < k; j++) {
            if (a[min_idx] > a[j]) {
                min_idx = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = tmp;

        for (int i = 0; i < k; i++) {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}