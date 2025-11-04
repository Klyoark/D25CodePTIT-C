#include <math.h>
#include <stdio.h>

int Exterminated_Total(int Reimu) {
    long Donation = 0;
    while (Reimu != 0) {
        Donation += Reimu % 10;
        Reimu /= 10;
    }
    return Donation;
}

int main() {
    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);

    if (Exterminated_Total(Reimu) == Exterminated_Total(Marisa)) {
        printf("%d %d", Reimu, Marisa);
    } else {
        if (Exterminated_Total(Reimu) > Exterminated_Total(Marisa)) {
            printf("%d %d", Marisa, Reimu);
        } else {
            printf("%d %d", Reimu, Marisa);
        }
    }
}