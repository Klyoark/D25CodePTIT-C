#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    long long Reimu, Marisa;
    scanf("%lld %lld", &Reimu, &Marisa);
    printf("%lld", ((Reimu + Marisa) * (llabs(Reimu - Marisa) + 1) / 2));


}