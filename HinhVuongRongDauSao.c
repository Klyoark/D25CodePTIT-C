#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu;
    scanf("%d", &Reimu);


    for (int Talisman = 0; Talisman < Reimu; Talisman++) {
        if (Talisman == Reimu - Reimu || Talisman == Reimu - 1) {
            for (int Yen = 0; Yen < Reimu; Yen++){
                printf("*");
            }
        } else {
            printf("*");
            for (int Cherry = 1; Cherry < Reimu - 1; Cherry ++) {
                printf (".");
            }
            printf("*");
        }
        printf("\n");
    }

}