#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    int cs = 1;

    int left, right, top, bot;
    left = top = 0;
    right = bot = n - 1;

    while (left <= right && top <= bot) {
        for (int i = left; i <= right; i++) {
            a[top][i] = cs++;
        }
        top++;

        for (int i = top; i <= bot; i++) {
            a[i][right] = cs++;
        }
        right--;

        if (left <= right) {
            for (int i = right; i >= left; i--) {
                a[bot][i] = cs++;
            }
            bot--;
        }

        if (top <= bot) {
            for (int i = bot; i >= top; i--) {
                a[i][left] = cs++;
            }
            left++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}