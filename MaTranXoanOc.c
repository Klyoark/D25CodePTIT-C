

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int Hanh[n][n];

    int left = 0, right = n - 1, top = 0, bot = n - 1;

    int cs = 1;

    while (top <= bot && left <= right) {
        for (int i = left; i <= right; i++) {
            Hanh[top][i] = cs;
            cs++;
        }
        top++;

        for (int i = top; i <= bot; i++) {
            Hanh[i][right] = cs;
            cs++;
        }
        right--;

        if (top <= bot) {
            for (int i = right; i >= left; i--) {
                Hanh[bot][i] = cs;
                cs++;
            }
            bot--;
        }

        if (left <= right) {
            for (int i = bot; i >= top; i--) {
                Hanh[i][left] = cs;
                cs++;
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