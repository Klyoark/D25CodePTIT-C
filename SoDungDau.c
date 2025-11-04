#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Amulet;
        scanf("%d", &Amulet);
        int Reimu[Amulet];
        for (int Seal = 0; Seal < Amulet; Seal++){
            scanf("%d", &Reimu[Seal]);
        }

        int Rinnosuke[Amulet], Counter = 0;
        int Talisman = -1;
        for (int Seal = Amulet - 1; Seal >= 0; Seal--){
            if (Reimu[Seal] > Talisman){
                Talisman = Reimu[Seal];
                Rinnosuke[Counter++] = Reimu[Seal];
            }
        }
        for (int Items = Counter - 1; Items >= 0; Items--){
            printf("%d ", Rinnosuke[Items]);
        }
        printf("\n");
    }
}