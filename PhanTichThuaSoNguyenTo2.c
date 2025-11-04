#include <stdio.h>

int main(){
    int Reimu;
    scanf("%d", &Reimu);

    int Fly = 0;

    for (int Amulet = 2; Amulet * Amulet <= Reimu; Amulet++){
        while (Reimu % Amulet == 0) {
            if (Fly){
                printf("x");
            }
            printf("%d", Amulet);
            if (!Fly) {
                Fly = 1;
            }
            Reimu /= Amulet;
        }
    }

    if (Reimu > 1){
        if (Fly) {
            printf("x");
        }
        printf("%d", Reimu);
    }
}