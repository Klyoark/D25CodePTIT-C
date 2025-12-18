#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input(char* S, size_t size) {
    fgets(S, size, stdin);
    S[strcspn(S, "\n")] = '\0';
}

void getWord(char* S, char Word[][203], int* w) {
    int count = 0;
    char* parts = strtok(S, " ");
    while (parts != NULL) {
        strcpy(Word[count++], parts);
        parts = strtok(NULL, " ");
    }
    *w = count;
}

int wordInList(char* cur_word, char list[][203], int list_size) {
    for (int i = 0; i < list_size; i++) {
        if (strcmp(cur_word, list[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

void FillRes(char Words1[][203], char Words2[][203], char res[][203], int* res_count, int w1, int w2) {
    int wr = 0;
    for (int i = 0; i < w1; i++) {
        if (!wordInList(Words1[i], Words2, w2) && !wordInList(Words1[i], res, wr)) {
            strcpy(res[wr++], Words1[i]);
        }
    }
    *res_count = wr;
}

int cmp(const void* a, const void * b) {
    return strcmp((const char*)a, (const char*)b);
}

void printRes(char res[][203], int wr) {
    for (int i = 0; i < wr; i++) {
        printf("%s ", res[i]);
    }
    printf("\n");
}

int main() {
    char S1[203], S2[203];
    char Words1[203][203], Words2[203][203];
    int w1 = 0, w2 = 0;
    char res[203][203];
    int wr = 0;
    input(S1, sizeof(S1));
    input(S2, sizeof(S2));
    getWord(S1, Words1, &w1);
    getWord(S2, Words2, &w2);
    FillRes(Words1, Words2, res, &wr, w1, w2);
    qsort(res, wr, sizeof(res[0]), cmp);
    printRes(res, wr);
}