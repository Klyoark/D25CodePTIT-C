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
            if (Reimu[Seal] % 2 == 0){
                printf("%d ", Reimu[Seal]);
            }
        }
        printf("\n");
    }
}