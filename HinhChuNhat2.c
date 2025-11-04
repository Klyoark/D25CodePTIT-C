#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);

    int Attic = 0;
    int Yen;
    if (Reimu <= Marisa ) {
        for (int Talisman = 0; Talisman < Reimu; Talisman++){
            Yen = 0;
            for (int Spark = Attic; Spark < Marisa; Spark++){
                Yen += 1;
                printf ("%d", Spark + 1);
            }
            for (int Money = Marisa; Money > Yen; Money--) {
                printf("%d", Money - 1);
            }
            Attic += 1;
            printf("\n");
        }   

    } else {
        for (int Talisman = 0; Talisman < Reimu; Talisman++){
            if (Talisman < Marisa) {
                Yen = 0;
                for (int Spark = Attic; Spark < Marisa; Spark++){
                    Yen += 1;
                    printf ("%d", Spark + 1);
                }
                for (int Money = Marisa; Money > Yen; Money--) {
                    printf("%d", Money - 1);
                }
                Attic += 1;
                printf("\n");
            } else {
                Attic = Talisman + 1;
                for (int Furnace = 0; Furnace < Marisa; Furnace++){
                    printf ("%d", Attic);
                    Attic -=1;
                }
                printf("\n");
            }
        }   

    }
}

