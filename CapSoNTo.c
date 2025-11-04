#include <stdio.h>
#include <math.h>

int sieve_f[1000006];

void sieve(){
    sieve_f[1] = 1;
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
    while(fairy--){
        int Reimu;
        scanf("%d", &Reimu);
        for (int Amulet = 2; Amulet <= Reimu / 2; Amulet++){
            if (!sieve_f[Amulet] && !sieve_f[Reimu - Amulet]){
                printf("%d %d ", Amulet, Reimu - Amulet);
            }
        }
        printf("\n");
    }
}