#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int b[100001] = {0};
    int c[n];
    int d = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
        if (b[a[i]] == 1) {
            c[d++] = a[i];
        }
    }

    for (int i = 0; i < d; i++) {
        printf("%d %d\n", c[i], b[c[i]]);
    }
}