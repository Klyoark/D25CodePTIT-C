#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long UCLN(long Reimu, long Marisa) {
    while (Reimu != 0) {
        long Shrine = Reimu;
        Reimu = Marisa % Reimu;
        Marisa = Shrine;
    }
    return Marisa;
}

long BCNN(long Reimu, long Marisa) {
    return Reimu * Marisa / UCLN(Reimu, Marisa);
}

int main() {
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        long Reimu, Marisa;
        scanf("%ld %ld", &Reimu, &Marisa);
        printf("%ld %ld\n", BCNN(Reimu, Marisa), UCLN(Reimu, Marisa));
    }
}