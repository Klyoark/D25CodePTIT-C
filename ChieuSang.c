#include <stdio.h>

int main() {
    int N, M, K;
    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%d", &K);

    int pos[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &pos[i]);
    }

    int Highland[1005] = {0};

    int left = 0;
    int right = 0;
    for (int i = 0; i < M; i++) {
        left = pos[i] - K;
        right = pos[i] + K;

        
        if (left < 1) {
            left = 1;
        }
        if (right > N) {
            right = N;
        }
        for (int j = left; j <= right; j++) {
            Highland[j] = 1; 
        }
    }

    int C = 0;
    
    for (int i = 1; i <= N; ) {
        if (Highland[i] == 1) {
            i++;
        } else { 
            C++;
            i += K + 1 + K;
        }
    }

    printf("%d", C);
}