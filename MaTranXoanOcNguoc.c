#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int cs = n * n;
        int a[n][n];
        int left = 0, right = n - 1;
        int top = 0, bot = n - 1;

        while (left <= right && top <= bot) {
            for (int i = left; i <= right; i++) {
                a[top][i] = cs--;
            }
            top++;

            for (int i = top; i <= bot; i++) {
                a[i][right] = cs--;
            }
            right--;

            if (top <= bot) {
                for (int i = right; i >= left; i--) {
                    a[bot][i] = cs--;
                }
            }
            bot--;

            if (left <= right) {
                for (int i = bot; i >= top; i--) {
                    a[i][left] = cs--;
                }
            }
            left++;
        }
        
        printf("Test %d:\n", test);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}