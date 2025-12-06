#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* xoaBo(char S1[], char S2[]) {
    char* res = malloc(205);
    res[0] = '\0';

    char* parts = strtok(S1, " ");
    while (parts != NULL) {
        int ok = 0;
        if (strcasecmp(parts, S2) != 0) {
            strcat(res, parts);
            ok = 1;
        }
        parts = strtok(NULL, " ");
        if (ok && parts != NULL) {
            strcat(res, " ");
        }
    }
    return res;
}

int main() {
    int t;
    scanf("%d\n", &t);
    for (int k = 1; k <= t; k++) {
        char S1[205];
        char S2[25];
        fgets(S1, 205, stdin);
        fgets(S2, 25, stdin);
        S1[strcspn(S1, "\n")] = '\0';
        S2[strcspn(S2, "\n")] = '\0';

        printf("Test %d: ", k);

        char* res = xoaBo(S1, S2);
        printf("%s", res);
        printf("\n");
        free(res);
    }
}