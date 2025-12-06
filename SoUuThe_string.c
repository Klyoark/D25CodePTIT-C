#include <stdio.h>
#include <string.h>

int checkUuThe(char num[]) {
    int len = strlen(num);
    if (num[0] == '0') {
        return 100;
    }
    int c = 0, l = 0; 

    for (int i = 0; i < len; i++) {
        if (num[i] > '9' || num[i] < '0') {
            return 100;
        }
        if ((num[i] - '0') % 2 == 0) {
            c++;
        } else if ((num[i] - '0') % 2 != 0) {
            l++;
        } else {
            return 100;
        }
    }

    if (c > l && len % 2 == 0) {
        return 1;
    } else if (l > c && len % 2 != 0) {
        return 1;
    } else {
        return  0;
    }
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char num[1005];
        fgets(num, 1005, stdin);
        num[strcspn(num, "\n")] = '\0';
        if (checkUuThe(num) == 1) {
            printf("YES\n");
        } else if (checkUuThe(num) == 0) {
            printf("NO\n");
        } else {
            printf("INVALID\n");
        }
    }
}