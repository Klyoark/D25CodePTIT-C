#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char list[1001][101];
    int idx = 0;

    int maxlen = -1;
    int len;

    while (scanf("%s", &word) == 1) {
        len = strlen(word);
        strcpy(list[idx++], word);
        if (len > maxlen) {
            maxlen = len;
        }   
    }

    for (int i = 0; i < idx; i++) {
        if (strlen(list[i]) == maxlen) {
            int c = 1;
            for (int j = i + 1; j < idx; j++) {
                if (!strcasecmp(list[j], list[i])) {
                    list[j][0] = '\0';
                    c++;
                }
            }
            printf("%s %d %d\n", list[i], maxlen, c);
        }
    }
}