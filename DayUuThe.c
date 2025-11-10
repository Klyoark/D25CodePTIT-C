#include <stdio.h>

int check(int a[], int n) {
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if ((n % 2 == 0 && even > odd) || (n % 2 != 0 && even < odd)) {
        return 1;
    }
    return 0;
}

int main(void) {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        int a[205], n = 0;
        int x;

        while (1) {
            scanf("%d", &x);
            a[n++] = x;

            int c = getchar();
            if (c == '\n' || c == EOF) {
                break;
            }
        }

        printf("%s\n", check(a, n) ? "YES" : "NO");
    }

    return 0;
}
