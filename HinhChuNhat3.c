#include <stdio.h>

int main(){

    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);

    int Attic;
    int Yen;
    for (int Talisman = 0; Talisman < Reimu; Talisman++){
        if (Talisman < Marisa) {
            Attic = Talisman + 1;
            Yen = 0;
            for (int Spark = 0; Spark < Talisman; Spark++){
                printf("%d", Attic);
                Attic--;
                Yen++;
            }
            for (int Money = 0; Money < Marisa - Yen; Money++){
                printf("%d", Attic);
                Attic++;
            }

            printf("\n");
        } else {
            Attic = Talisman + 1;
            for (int Furnace = 0; Furnace < Marisa; Furnace++){
                printf ("%d", Attic);
                Attic--;
            }
            printf("\n");
        }
    }   
    return 0;
}