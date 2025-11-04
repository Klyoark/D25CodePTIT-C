#include <stdio.h>

int main() {
    int fairy;
    scanf ("%d", &fairy);
    while (fairy--){
        int Reimu;
        int nguyento = 1;
        scanf("%d", &Reimu);
        if (Reimu <= 1) {
            nguyento = 0;
        } else {
            for (int i = 2; i <= Reimu / 2; ++i) {
                if (Reimu % i == 0) { 
                    nguyento = 0;
                    break;
                }
            }
        }
        if (nguyento == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}