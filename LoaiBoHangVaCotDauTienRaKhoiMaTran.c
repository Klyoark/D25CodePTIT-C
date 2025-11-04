#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    for (int mamamia = 1; mamamia <= fairy; mamamia++){
        int Reimu, Marisa;
        scanf("%d %d", &Reimu, &Marisa);
        int Gensokyo[Reimu][Marisa];

        for (int Amulet = 0; Amulet < Reimu; Amulet++){
            for (int Spark = 0; Spark < Marisa; Spark++){
                scanf("%d", &Gensokyo[Amulet][Spark]);
            }
        }
        printf("Test %d:\n", mamamia);
        for (int Amulet = 1; Amulet < Reimu; Amulet++){
            for (int Spark = 1; Spark < Marisa; Spark++){
                printf("%d ", Gensokyo[Amulet][Spark]);
            }
            printf("\n");
        }
    }
}