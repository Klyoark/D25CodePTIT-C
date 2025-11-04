#include <stdio.h>
#include <math.h>

int sieve_n, sieve_f[1000006];
long long sieve_a[1000006];
void sieve(){
    sieve_f[0] = sieve_f[1] = 1;
    for (int i = 2; i * i <= 1000000; i++){
        if (!sieve_f[i]){
            for (int j = i * i; j <= 1000000; j += i){
                sieve_f[j] = 1;
            }
        }
    }
    for (int i = 2; i <= 1000000; i++){
        if (!sieve_f[i]){
            sieve_a[sieve_n++] = i;
        }
    }
}


int main(){
    sieve();
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Money = 0;
        long long Reimu, Marisa;
        scanf("%lld %lld", &Reimu, &Marisa);
        for (int Amulet = 0; Amulet < sieve_n; Amulet++){
            if ((sieve_a[Amulet] * sieve_a[Amulet]) >= Reimu && (sieve_a[Amulet] * sieve_a[Amulet] <= Marisa)){
                Money++;
            }
        }
        printf("%d\n", Money);
    }
}