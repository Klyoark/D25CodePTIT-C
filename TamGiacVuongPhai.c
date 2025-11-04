#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu;
    scanf("%d", &Reimu);

    int Shrine = Reimu - 1;

    for (int Talisman = 1; Talisman <= Reimu; Talisman++){
        for (int CherryBlossom = Shrine; CherryBlossom > 0; CherryBlossom--){
            printf("~");
        } 
        for (int Yen = 1; Yen <= Talisman; Yen++){
            printf("*");

        }
        printf("\n");
        Shrine -= 1;
    }

}