#include <stdio.h>
#include <string.h>

char all_num[11] = "0123456789";

void check(char input[]) {
    int cs[1000] = {};
    int len = strlen(input);
    int diffN = 0;

    for (int i = 0; i < len; i++) {
        if (input[0] == '0') {
            printf("INVALID\n");
            return;
        }
        if (input[i] < '0' || input[i] > '9') {
            printf("INVALID\n");
            return;
        }

        for (int c = 0; c < 10; c++) {
            if (input[i] == all_num[c]) {
                cs[c]++;
            }
        }
    }

    for (int c = 0; c < 10; c++) {
        if (cs[c] != 0) {
            diffN++;
        }
    }

    if (diffN == 0) {
        printf("INVALID\n");
    } else if (diffN == 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char input[1001];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        check(input);
    }
}