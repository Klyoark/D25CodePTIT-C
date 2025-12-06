#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int in_list(char* cur_word, char list[][203], int cur_size){
    for (int i = 0; i < cur_size; i++) {
        if (strcmp(cur_word, list[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int cmp(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char S1[203], S2[203];
        fgets(S1, 203, stdin);
        S1[strcspn(S1, "\n")] = '\0';
        fgets(S2, 203, stdin);
        S2[strcspn(S2, "\n")] = '\0';

        char Words1[203][203], Words2[203][203];
        int w1 = 0, w2 = 0;

        char* parts = strtok(S1, " ");
        while (parts != NULL) {
            strcpy(Words1[w1++], parts);
            parts = strtok(NULL, " ");
        }

        parts = strtok(S2, " ");
        while (parts != NULL) {
            strcpy(Words2[w2++], parts);
            parts = strtok(NULL, " ");
        }

        char res[203][203];
        int wr = 0;

        for (int i = 0; i < w1; i++) {
            if (!in_list(Words1[i], Words2, w2) && !in_list(Words1[i], res, wr)) {
                strcpy(res[wr++], Words1[i]);
            }
        }

        qsort(res, wr, sizeof(res[0]), cmp);

        for (int i = 0; i < wr; i++) {
            printf("%s ", res[i]);
        }

        printf("\n");
    }
}