#include <stdio.h>

int f[100001];
int g[100001];
void sieve() {
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 100000; i++) {
        if (!f[i]) {
            for (int j = i * i; j <= 100000; j+= i) {
                f[j] = 1;
            }
        }
    }
    int k = 0;
    for (int i = 0; i <= 100000; i++) {
        if (!f[i]) {
            g[k++] = i;
        }
    }
}


int main() {
    sieve();
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int cs = n * n;
        int a[n][n];
        int left = 0, right = n - 1;
        int top = 0, bot = n - 1;
        int g_idx = 0;
        while (left <= right && top <= bot) {
            for (int i = left; i <= right; i++) {
                a[top][i] = g[g_idx++];
            }
            top++;

            for (int i = top; i <= bot; i++) {
                a[i][right] = g[g_idx++];
            }
            right--;

            if (top <= bot) {
                for (int i = right; i >= left; i--) {
                    a[bot][i] = g[g_idx++];
                }
            }
            bot--;

            if (left <= right) {
                for (int i = bot; i >= top; i--) {
                    a[i][left] = g[g_idx++];
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