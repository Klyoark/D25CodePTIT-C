#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0';
    int l = strlen(S);
    for (int i = 0; i < l; i++) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] += 32;
        }
    }

    char *tok[500];
    int n = 0;

    char *t = strtok(S, " ");

    while (t != NULL) {
        tok[n++] = t;
        t = strtok(NULL, " ");
    }

    for (int i = 0; i < n; i++) {
        if (tok[i][0] == '\0') {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(tok[i], tok[j]) == 0) {
                count++;
                tok[j][0] = '\0';
            }
        }

        printf("%s %d\n", tok[i], count);
    }
}