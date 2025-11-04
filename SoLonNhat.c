#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Seal;
        scanf("%d", &Seal);
        int Reimu[Seal], Marisa = 0;
        for (int Amulet = 0; Amulet < Seal; Amulet++){
            scanf("%d", &Reimu[Amulet]);
            if (Reimu[Amulet] > Marisa){
                Marisa = Reimu[Amulet];
            }
        }
        printf("%d\n", Marisa);
        for (int Talisman = 0; Talisman < Seal; Talisman++){
            if (Reimu[Talisman] == Marisa){
                printf("%d ", Talisman);
            }
        }
        printf("\n");
    }
}