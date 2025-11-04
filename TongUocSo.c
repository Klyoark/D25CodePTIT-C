#include <stdio.h>

int f[2000005];
void sieve(){
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 2000000; i++) {
        if (!f[i]){
            for (int j = i * i; j <= 2000000; j += i) {
                f[j] = i;
            }
        }
    }
    for (int i = 2; i <= 2000000; i++) {
        if (!f[i]) {
            f[i] = i;
        }
    }
}


int main(){
    sieve();
    int Reimu;
    int Seal;
    long long Money = 0;
    scanf("%d", &Reimu);
    while (Reimu--) {
        scanf("%d", &Seal);
        while (Seal != 1) {
            Money += f[Seal];
            Seal /= f[Seal];
        }
    }
    printf("%lld", Money);
}