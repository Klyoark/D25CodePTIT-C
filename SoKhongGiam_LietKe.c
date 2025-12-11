#include <stdio.h>

int N;
char a[25];

void backtrack(int pos, int min) {
    if (pos == N) {
        for (int i = 0; i < N; i++) {
            printf("%d", a[i]);
        }
        printf(" ");
        return;
    }

    for (int digit = min; digit <= 9; digit++) {
        a[pos] = digit;
        backtrack(pos + 1, digit);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &N);
        for (int first = 1; first <= 9; first++) {
            a[0] = first;
            backtrack(1, first);
        }
        printf("\n");
    }
}