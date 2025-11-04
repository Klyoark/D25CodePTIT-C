#include <stdio.h>

int main(){
    double Reimu, Marisa;
    scanf("%lf %lf", & Reimu, &Marisa);
    if (Reimu == 0) {
        if (Marisa == 0) {
            printf ("Vo so nghiem");
        } else {
            printf("Vo nghiem");
        }
    } else {
        printf ("%.02lf", -Marisa / Reimu);
    }



}