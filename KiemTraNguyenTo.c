#include <stdio.h>

int f[1005];

void sieve(){
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 1001; i++){
        if(!f[i]){
            for (int j = i * i; j <= 1001; j += i){
                f[j] = 1;
            }
        }
    }
}

int main(){
    sieve();
    int N, M;
    scanf("%d %d", &N, &M);

    int Reimu[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &Reimu[i][j]);
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d", !f[Reimu[i][j]]);
            if (j < M - 1) printf(" ");
        }
        printf("\n");
    }
}