#include <stdio.h>
#include <stdlib.h>

static int f[100005] = {0};

void sieve(){
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 100000; i++){
        if (!f[i]){
            for (int j = i * i; j <= 100000; j += i ){
                f[j] = 1;
            }
        }
    }
}

int main(){
    sieve();
    int o;
    scanf("%d", &o);
    for (int t = 1; t <= o; t++) {
        int n;
        scanf("%d", &n);
        int a[n];
        int* b = calloc(100001, sizeof(int));
        int c[n];
        int d = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[a[i]]++;
            if (b[a[i]] == 1 && !f[a[i]]) {
                c[d++] = a[i];
            }
        }

        printf("Test %d:\n", t);
        for (int i = 0; i < d; i++) {
            printf("%d xuat hien %d lan\n", c[i], b[c[i]]);
        }

        free(b);
    }
}