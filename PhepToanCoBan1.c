#include <stdio.h>

int main(){
    int Reimu;
    int Marisa;
    scanf("%d%d", &Reimu, &Marisa);
    if (Marisa == 0) {
        printf("0");
    } else {
        printf("%d %d %d %.02f %d\n", Reimu + Marisa, Reimu - Marisa, Reimu * Marisa, (float)Reimu / Marisa, Reimu % Marisa);
    }
    

}