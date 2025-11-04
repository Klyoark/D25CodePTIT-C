#include <stdio.h>
#include <math.h>


int main(){

    int fairy;
    scanf("%d", &fairy);
    while(fairy--){

        long Reimu, Marisa;
        scanf("%ld %ld", &Reimu, &Marisa);

        int Exterminated = 0;

        for (long Talisman = Reimu; Talisman <= Marisa; Talisman++) {
            int IncidentResolved = 1;
            long Seal = Talisman; 
            long Furnace = 0;
            while (Seal != 0) {
                Furnace = Furnace * 10 + Seal % 10;
                Seal /= 10;
            }

            if (Furnace == Talisman) {
                for (long Dono = 2; Dono * Dono <= Talisman; Dono++){
                    if (Talisman % Dono == 0) {
                        IncidentResolved = 0;
                        break;
                    } 
                }
            } else {
                IncidentResolved = 0;
            }

            if (IncidentResolved) {
                printf("%ld ", Talisman);
                Exterminated += 1;
            }

            if (Exterminated == 10) {
                printf("\n");
                Exterminated = 0;
            }
        }
        printf("\n\n");
    }
}