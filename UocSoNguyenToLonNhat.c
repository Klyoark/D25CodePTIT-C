#include <stdio.h>

int main() {
    int fairy;
    scanf("%d", &fairy);
    long long LNMNB1CC;
    while (fairy--) {
        long long Reimu;
        scanf("%lld", &Reimu);
        for (long long Amulet = 2; Amulet * Amulet <= Reimu; Amulet++) {
            if (Reimu % Amulet == 0) {
                LNMNB1CC = Amulet;
                while (Reimu % Amulet == 0) {
                    Reimu /= Amulet;
                }
            }
        }

        if (Reimu > 1) {
            LNMNB1CC = Reimu;
        }
        printf("%lld\n", LNMNB1CC);
    }
}