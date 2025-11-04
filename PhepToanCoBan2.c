#include <stdio.h>

int main(){
    long Reimu;
    long Marisa;
    scanf("%ld%ld", &Reimu, &Marisa);
    
    printf("%ld\n%ld\n%ld\n%ld\n%ld\n%.02lf\n", Reimu + Marisa, Reimu - Marisa, Reimu * Marisa, Reimu / Marisa, Reimu % Marisa, (double)Reimu / Marisa );
    

}