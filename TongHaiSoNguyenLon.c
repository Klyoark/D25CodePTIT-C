#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char a[1000], b[1000];
        fgets(a, 1000, stdin);
        fgets(b, 1000, stdin);
        a[strcspn(a, "\n")] = '\0';
        b[strcspn(b, "\n")] = '\0';

        int carry = 0, k = 0;
        char reversed_result[2000] = "", result[2000] = "";
        for (int i = strlen(a) - 1, j = strlen(b) - 1; i >= 0 || j >= 0 || carry; i--, j--) {
            int ia = (i >= 0) ? a[i] - '0' : 0;
            int jb = (j >= 0) ? b[j] - '0' : 0;
            int cs = ia + jb + carry;

            reversed_result[k++] = cs % 10 + '0';
            carry = cs / 10;
        }

        for (int i = 0; i < k; i++) {
            result[i] = reversed_result[k - i - 1];
        }
        result[k] = '\0';

        printf("%s\n", result);
    }
}