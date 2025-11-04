#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long UCLN(long Reimu, long Marisa){
    while (Reimu != 0){
        long Shrine = Reimu;
        Reimu = Marisa % Reimu;
        Marisa = Shrine;
    }
    return Marisa;
}

long BCNN(long Reimu, long Marisa){
    return Reimu * Marisa / UCLN(Reimu, Marisa);
}

int main(){

    long Reimu, Marisa;
    scanf("%ld %ld", &Reimu, &Marisa);
    printf("%ld\n%ld", UCLN(Reimu, Marisa), BCNN(Reimu, Marisa));

}