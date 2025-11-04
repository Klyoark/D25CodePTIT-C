#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int UCLN(long Reimu, long Marisa){
    while (Reimu != 0){
        long Shrine = Reimu;
        Reimu = Marisa % Reimu;
        Marisa = Shrine;
    }
    return Marisa;
}

int main(){
    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);
    while (Reimu < Marisa){ 
        for (int Talisman = Reimu; Talisman < Marisa; Talisman++){
            for (int Spark = Talisman + 1; Spark <= Marisa; Spark++){
                if (UCLN(Talisman, Spark) == 1){
                    printf("(%d,%d)\n", Talisman, Spark);
                }
            }  
        Reimu++; 
        }
    }
}