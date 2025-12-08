#include <stdio.h>
#include <string.h>

int thuanNghich(char* word) {
    int len = strlen(word);
    for (int i = 0; i < (len - 1) / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[101], list[10001][101];
    int n_list = 0;
    int max_len = -1;
    int len;

    while (scanf("%s", &word) != -1) {
        if (thuanNghich(word)) {
            len = strlen(word);
            strcpy(list[n_list++], word);
            if (max_len < len) {
                max_len = len;
            }
        }
    }

    for (int i = 0; i < n_list; i++) {
        if (strlen(list[i]) == max_len) {
            int count = 1;
            for (int j = i + 1; j < n_list; j++) {
                if(!strcmp(list[i], list[j])) {
                    list[j][0] = '\0';
                    count++;
                }
            }
            printf("%s %d\n", list[i], count);
        }
    }   
}