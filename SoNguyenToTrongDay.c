#include <stdio.h>

int sieve_f[1000006];
void sieve(){
    sieve_f[0] = sieve_f[1] = 1;
    for (int i = 2; i * i <= 1000000; i++){
        if (!sieve_f[i]){
            for (int j = i * i; j <= 1000000; j += i){
                sieve_f[j] = 1;
            }
        }
    }
}

int main(){
    sieve();
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Amulet, Reimu;
        scanf("%d", &Amulet);
        while (Amulet--){
            scanf("%d", &Reimu);
            if (!sieve_f[Reimu]){
                printf("%d ", Reimu);
            }
        }
        printf("\n");
    }
}