#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu;
    scanf("%d", &Reimu);
    for (int Talisman = 1; Talisman <= Reimu; Talisman++){
        for (int Yen = 1; Yen <= Talisman; Yen++){
            printf("*");
        }
        printf("\n");
    }

}