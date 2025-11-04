#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu;
    scanf("%d", &Reimu);
    int Yen = Reimu - 1;

    for (int Talisman = 0; Talisman < Reimu; Talisman++) {
        for (int Donation = Yen; Donation > 0; Donation--){
            printf("~");
        }
        for (int Cherry = 0; Cherry < Reimu; Cherry++) {

            if (Cherry == 0 || Cherry == Reimu - 1 || Talisman == 0 || Talisman == Reimu - 1) {
                printf("*");
            } else {
                printf (".");
            }
        }
        printf("\n");
        Yen -= 1;
    }

}