#include <stdio.h>

int main() {
    long long Reimu, Marisa = 0;
    scanf("%lld", &Reimu);

    while (Reimu) {
        Marisa = Marisa * 10 + Reimu % 10;
        Reimu /= 10;
    }

    Reimu = Marisa;

    int prime_index = 0;
    int prime[16], counter[16] = {0};
    
    while (Reimu != 0) {
        int d = Reimu % 10;
        Reimu /= 10;
        if (d != 2 && d != 3 && d != 5 && d != 7) {
            continue;
        }
        if (counter[d] == 0) {
            prime[prime_index++] = d;
        }
        counter[d]++;
    }

    for (int i = 0; i < prime_index; i++) {
        printf("%d %d\n", prime[i], counter[prime[i]]);
    }
    

}