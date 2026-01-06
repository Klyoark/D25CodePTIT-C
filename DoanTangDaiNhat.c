#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int maxLen = 1, start = 0;

        // Pass 1: find max length
        for (int i = 1; i < n; i++) {
            if (i == n || a[i] <= a[i - 1]) {
                if (i - start > maxLen)
                    maxLen = i - start;
                start = i;
            }
        }

        printf("Test %d:\n%d\n", tc, maxLen);

        // Pass 2: print all max segments
        start = 0;
        for (int i = 1; i <= n; i++) {
            if (i == n || a[i] <= a[i - 1]) {
                if (i - start == maxLen) {
                    for (int j = start; j < i; j++)
                        printf("%d ", a[j]);
                    printf("\n");
                }
                start = i;
            }
        }
    }
    return 0;
}
