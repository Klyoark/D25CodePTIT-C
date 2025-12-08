#include <stdio.h>
#include <string.h>

void swap(char* A, char* B) {
    char tmp[1005];
    strcpy(tmp, A);
    strcpy(A, B);
    strcpy(B, tmp);
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char A[1005];
        char B[1005];
        fgets(A, 1005, stdin);
        fgets(B, 1005, stdin);
        A[strcspn(A, "\n")] = '\0';
        B[strcspn(B, "\n")] = '\0';

        int lenA = strlen(A);
        int lenB = strlen(B);

        if ( lenA < lenB || (lenA == lenB && strcmp(A, B) < 0) ) {
            swap(A, B);
            lenA = strlen(A);
            lenB = strlen(B);
        }

        char reversed_res[1005], res[1005];
        int rr = 0;
        int borrow = 0;
        int cs = 0;

        for (int i = lenA - 1, j = lenB - 1; i >= 0; i--, j--) {
            int ia = A[i] - '0';
            int jb = (j >= 0) ? B[j] - '0' : 0;

            cs = ia - jb - borrow;

            if (cs < 0) {
                cs += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }

            reversed_res[rr++] = cs + '0';
        }

        while (rr > 1 && reversed_res[rr - 1] == '0') {
            rr--;
        }

        for (int i = 0; i < rr; i++) {
            res[i] = reversed_res[rr - i - 1];
        }
        res[rr] = '\0';
        printf("%s\n", res);
    }
}