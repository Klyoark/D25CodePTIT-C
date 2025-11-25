#include <stdio.h>

int b[101];
void fibo() {
    b[0] = 0;
    b[1] = 1;
    for (int i = 2; i < 101; i++) {
        b[i] = b[i-1] + b[i-2];
    }
}

int main() {
    fibo();
    int n;
    scanf("%d", &n);
    int Hanh[n][n];

    int left = 0, right = n - 1, top = 0, bot = n - 1;

    int f_idx = 0;

    while (top <= bot && left <= right) {
        for (int i = left; i <= right; i++) {
            Hanh[top][i] = b[f_idx++];
        }
        top++;

        for (int i = top; i <= bot; i++) {
            Hanh[i][right] = b[f_idx++];
        }
        right--;

        if (top <= bot) {
            for (int i = right; i >= left; i--) {
                Hanh[bot][i] = b[f_idx++];

            }
            bot--;
        }

        if (left <= right) {
            for (int i = bot; i >= top; i--) {
                Hanh[i][left] = b[f_idx++];

            }
            left++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Hanh[i][j]);
        }
        printf("\n");
    }
}