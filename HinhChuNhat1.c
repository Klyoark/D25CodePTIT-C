#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu, Marisa;
    int Attic = 1;
    scanf("%d %d", &Reimu, &Marisa);
// Hang <= Cot
//Talisman Potion Broom
    if (Reimu <= Marisa) {
        for (int Talisman = 1; Talisman <= Reimu; Talisman++){
            for (int Potion = Attic; Potion <= Marisa; Potion++) {
                printf("%d", Potion);
            }
            for (int Broom = Attic - 1; Broom >= 1; Broom--){
                printf("%d", Broom);
            }
            Attic += 1;
            printf("\n");
        }

// Hang > Cot
// Furnace
    } else {
        for (int Spark = 1; Spark <= Marisa; Spark++){
            for (int Potion = Attic; Potion <= Marisa; Potion++) {
                printf("%d", Potion);
            }
            for (int Broom = Attic - 1; Broom >= 1; Broom--){
                printf("%d", Broom);
            }
            Attic += 1;
            printf("\n");
        }
        for (int Furnace = Marisa; Furnace < Reimu; Furnace++){
            printf("%d", Furnace + 1);
            for (int Donation = Marisa - 1; Donation > 0; Donation--){
                printf("%d", Donation);
            }

            printf("\n");
        }
         
    }
}