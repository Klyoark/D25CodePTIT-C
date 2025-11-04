#include <stdio.h>

int main(){
    int Amulet;
    scanf("%d", &Amulet);
    int Reimu[Amulet];
    int Rinnosuke[100005] = {}; 
    int Marisa[Amulet], Spark = 0;
    for (int Seal = 0; Seal < Amulet; Seal++){
        scanf("%d", &Reimu[Seal]);
        Rinnosuke[Reimu[Seal]]++;
    }

    for (int Seal  = 0; Seal < Amulet; Seal++){
        if (Rinnosuke[Reimu[Seal]] > 1){
            Marisa[Spark++] = Reimu[Seal];
            Rinnosuke[Reimu[Seal]] = 1;
        }
    }
    printf("%d\n", Spark);
    for (int Flat = 0; Flat < Spark; Flat++){
        printf("%d ", Marisa[Flat]);
    }
}