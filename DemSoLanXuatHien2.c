#include <stdio.h>

int main(){

    int fairy;
    scanf("%d", &fairy);
    for (int Bullet = 1; Bullet <= fairy; Bullet++){
        int n;
        scanf("%d", &n);
        int a[n];
        int b[100001] = {0};
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            if (b[i] == 0) {
                b[i] = 1;
                for (int j = i + 1; j < n; j++) {
                    if (a[i] == a[j]) {
                        b[j] = -1;
                        b[i]++;
                    }
                }
            }
        }

        printf("Test %d:\n", Bullet);
        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                printf("%d xuat hien %d lan\n", a[i], b[i]);
            }
        }
    }

}