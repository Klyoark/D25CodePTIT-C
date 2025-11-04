#include <stdio.h>

long long f[1000];
int main(){
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    int Reimu, Marisa, fairy;
    scanf("%d", &fairy);
    while (fairy--){
        scanf("%d %d", &Reimu, &Marisa);
        for (int i = Reimu; i <= Marisa; i++) {
                printf("%lld ", f[i]);
        }
        printf("\n");
    }
}




