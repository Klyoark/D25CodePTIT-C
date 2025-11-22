#include <stdio.h>

int f[1001] = {0};
void sieve(){
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 1000; i++) {
        if (!f[i]) {
            for (int j = i * i; j <= 1000; j += i) {
                f[j] = 1;
            }
        }
    }
}

int main(){
    sieve();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[1000] = {0};

        int x;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (!f[x]) {
                a[x] = 1;
            }
        }
        for (int i = 0; i < 1000; i++) {
            if (a[i]) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}