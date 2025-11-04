#include <stdio.h>


int main(){

    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);

    for (int Spark = 1; Spark <= Marisa; Spark++){
        for (int Talisman = 1; Talisman <= Reimu; Talisman++){
            if (Talisman == 1 || Talisman == Reimu || Spark == 1 || Spark == Marisa){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }



}