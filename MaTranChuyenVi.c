#include <stdio.h>

int main(){
    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);
    int Gensokyo[Reimu][Marisa];

    for (int Amulet = 0; Amulet < Reimu; Amulet++){
        for (int Spark = 0; Spark < Marisa; Spark++){
            scanf("%d", &Gensokyo[Amulet][Spark]);
        }
    }
    for (int Amulet = 0; Amulet < Marisa; Amulet++){
        for (int Spark = 0; Spark < Reimu; Spark++){
            printf("%d ", Gensokyo[Spark][Amulet]);
        }
        printf("\n");
    }

}