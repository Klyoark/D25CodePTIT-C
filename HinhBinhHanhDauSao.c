#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Reimu;
    scanf("%d", &Reimu);
    int Yen = Reimu - 1;

    for (int Talisman = 0; Talisman < Reimu; Talisman++) {
        for (int Talisman = Yen; Talisman > 0; Talisman--){
            printf("~");
        }
        for (int Talisman = 0; Talisman < Reimu; Talisman++) {
            printf("*");
        }
        printf("\n");
        Yen -= 1;
    }

}