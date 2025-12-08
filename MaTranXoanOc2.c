#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        int left = 0, right = n - 1;
        int top = 0, bot = m - 1;

        while (left <= right && top <= bot) {
            for (int i = left; i <= right; i++) {
                printf("%d ", a[top][i]);
            }
            top++;

            for (int i = top; i <= bot; i++) {
                printf("%d ", a[i][right]);
            }
            right--;

            if (top <= bot) {
                for (int i = right; i >= left; i--) {
                    printf("%d ", a[bot][i]);
                }
                bot--;
            }

            if (left <= right) {
                for (int i = bot; i >= top; i--) {
                    printf("%d ", a[i][left]);
                }
                left++;
            }
        }
        printf("\n");
    }
}