#include <stdio.h>

int main() {
    int Fairy;
    scanf("%d", &Fairy);
    int Cirno[Fairy];

    for (int Ice = 0; Ice < Fairy; Ice++) {
        scanf("%d", &Cirno[Ice]);
    }
    for (int Frost = 0; Frost < Fairy - 1; Frost++) {
        for (int Ice = Frost + 1; Ice < Fairy; Ice++) {
            if (Cirno[Ice] < Cirno[Frost]) {
                int tmp = Cirno[Frost];
                Cirno[Frost] = Cirno[Ice];
                Cirno[Ice] = tmp;
            }
        }
        printf("Buoc %d: ", Frost + 1);
        for (int Cold = 0; Cold < Fairy; Cold++) {
            printf("%d ", Cirno[Cold]);
        }
        printf("\n");
    }
}