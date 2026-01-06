#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int b[100005] = {0};
    int c[n];
    int d = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (!b[a[i]]) {
            b[a[i]]++;
            c[d++] = a[i];
        }
    }
    for (int i = 0; i < d; i++) {
        printf("%d ", c[i]);
    }
}