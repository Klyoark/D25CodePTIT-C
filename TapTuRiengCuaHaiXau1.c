#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int in_list(char* cur_word, char target_list[][103], int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(cur_word, target_list[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int cmp(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    char S1[103], S2[103];
    fgets(S1, 103, stdin);
    S1[strcspn(S1, "\n")] = '\0';
    fgets(S2, 103, stdin);
    S2[strcspn(S2, "\n")] = '\0';

    char Words1[103][103], Words2[103][103];
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

    char res[103][103];
    int wres = 0;

    for (int i = 0; i < w1; i++) {
        if (!in_list(Words1[i], Words2, w2) && !in_list(Words1[i], res, wres)) {
            strcpy (res[wres++], Words1[i]);
        }
    }

    qsort(res, wres, sizeof(res[0]), cmp);

    for (int i = 0; i < wres; i++) {
        printf("%s ", res[i]);
    }

}