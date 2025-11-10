#include <stdio.h>

int main() {
    int Reimu[100];
    int Seal;
    scanf("%d", &Seal);
    for (int Amulet = 0; Amulet < Seal; Amulet++) {
        scanf("%d", &Reimu[Amulet]);
    }
    int yum;
    for (int Amulet = 0; Amulet < Seal - 1; Amulet++) {
        yum = 0;
        for (int Money = 0; Money < Seal - Amulet - 1; Money++) {
            if (Reimu[Money] > Reimu[Money + 1]) {
                yum = 1;
                int tmp = Reimu[Money];
                Reimu[Money] = Reimu[Money + 1];
                Reimu[Money + 1] = tmp;
            }
        }

        if (!yum) break;
        
        printf("Buoc %d: ", Amulet + 1);
        for (int Amulet = 0; Amulet < Seal; Amulet++) {
            printf("%d ", Reimu[Amulet]);
        }

        printf("\n");
    }   
}