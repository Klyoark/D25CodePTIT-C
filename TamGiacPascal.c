#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n + 1];
    for (int i = 0; i < n + 1; i++) {
        a[i] = 0;
    }
    a[0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d " , a[j]);
        }
        printf("\n");

        for (int j = i + 1; j > 0; j--) {
            a[j] = a[j] + a[j - 1];
        }
    }
}
