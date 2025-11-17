#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++) {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[m][n], cot[n], hang[m];

        for (int i = 0; i < m; i++) {
            hang[i] = 0;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
                hang[i] += a[i][j];
            }
        }

        int mh_idx = 0;
        for (int i = 0; i < m; i++) {
            if (hang[i] > hang[mh_idx]) {
                mh_idx = i;
            }
        }

        for (int j = 0; j < n; j++) {
            cot[j] = 0;
            for (int i = 0; i < m; i++) {
                if (i != mh_idx) {
                    cot[j] += a[i][j];
                }
            }
        }

        int mc_idx = 0;
        for (int j = 1; j < n; j++) {
            if (cot[j] > cot[mc_idx]) {
                mc_idx = j;
            }
        }

        printf("Test %d:\n", k);
        for (int i = 0; i < m; i++) {
            if (i == mh_idx) {
                continue;
            }
            for (int j = 0; j < n; j++) {
                if (j == mc_idx) {
                    continue;
                }
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}