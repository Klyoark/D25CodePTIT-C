#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++) {

        int n;
        scanf("%d", &n);
        int a[n + 1], c[n + 1], b[n + 1][n + 1];
        a[0] = 1000;
        int cur_seq = 0, cur_len = 1, max_len = 0;

        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);

            if (a[i] <= a[i - 1]) {
                c[cur_seq] = cur_len;
                cur_len = 1;
                cur_seq++;
            }
            
            b[cur_seq][cur_len++] = a[i];  
            if (cur_len > max_len) {
                max_len = cur_len;
            }
        }

        c[cur_seq] = cur_len;
        printf("Test %d:\n%d\n", k, max_len - 1);

        for (int i = 1; i <= cur_seq; i++) {
            if (c[i] == max_len) {
                for (int j = 1; j < c[i]; j++) {
                    printf("%d ", b[i][j]);
                }
                printf("\n");
            }
        }
    }
}

