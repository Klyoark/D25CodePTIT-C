#include <stdio.h>
#include <math.h>

int main() {
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        long Reimu;
        scanf("%ld", &Reimu);
        if (sqrt(Reimu) == (long long)sqrt(Reimu)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}