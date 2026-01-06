#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
        int c = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int min = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > min) {
                min = a[i];
                b[c++] = a[i];
            }
        }

        for (int i = c - 1; i >= 0; i--) {
            printf("%d ", b[i]);
        }
    }
}