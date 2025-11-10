#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[105], W[105];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &A[i], &W[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] > A[j]) {
                int tmp = A[i]; A[i] = A[j]; A[j] = tmp;
                tmp = W[i]; W[i] = W[j]; W[j] = tmp;
            }
        }
    }

    long long cur_t = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] > cur_t) {
            cur_t = A[i];
        }
        cur_t += W[i];
    }

    printf("%lld\n", cur_t);
    return 0;
}
