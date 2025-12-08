#include <stdio.h>
#include <string.h>

int doiXungAble(char* S) {
    int len = strlen(S);
    int miss = 0;
    for (int i = 0; i < len / 2; i++) {
        if (S[i] != S[len - i - 1]) {
            miss++;
        }
    }
    if ((len % 2 == 0 && miss == 1) || (len % 2 != 0 && miss <= 1)) {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    scanf("%d\n", &t);
    while(t--) {
        char S[25];
        fgets(S, 25, stdin);
        S[strcspn(S, "\n")] = '\0';
        printf(doiXungAble(S) ? "YES\n" : "NO\n");
    }
}