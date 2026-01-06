#include <stdio.h>
#include <string.h>

void swap (char* a, char* b) {
    char tmp[105];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char a[105];
        char b[105];

        fgets(a, 105, stdin);
        fgets(b, 105, stdin);
        a[strcspn(a, "\n")] = '\0';
        b[strcspn(b, "\n")] = '\0';

        int lena = strlen(a) - 1;
        int lenb = strlen(b) - 1;
        if (lena - lenb < 0 || (lena == lenb && strcmp(a, b) < 0)) {
            swap(a, b);
            lena = strlen(a) - 1;
            lenb = strlen(b) - 1;
        }

        char revres[105] = {0};
        int rr = 0;
        char res[105] = {0};
        int k = 0;
        
        int borrow = 0;
        int ia, jb, cs;
        for (int i = lena, j = lenb; i >= 0; i--, j--) {
            ia = a[i] - '0';
            jb = (j >= 0) ? b[j] - '0' : 0;
            cs = (ia - borrow) - jb;

            if (cs < 0) {
                cs += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }

            revres[rr++] = cs + '0';
        }

        while (rr > 1 && revres[rr - 1] == '0') {
            rr--;
        }

        for (int i = 0; i < rr; i++) {
            res[i] = revres[rr - 1 - i];
        }
        res[rr] = '\0';
        printf("%s\n", res);
    }
}