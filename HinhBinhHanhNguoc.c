#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);
    int Yen = 0;

    for (int Talisman = 0; Talisman < Reimu; Talisman++) {
            for (int Donation = 0; Donation < Yen; Donation++){
                printf("~");
            }
            for (int Spark = 0; Spark < Marisa; Spark++) {
                printf("*");
            }
        printf("\n");
        Yen += 1;
    }
}