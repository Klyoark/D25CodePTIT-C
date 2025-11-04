#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Amulet;
        int IncidentResolved = 1;
        scanf("%d", &Amulet);
        int Reimu[Amulet];

        for (int Talisman = 0; Talisman < Amulet; Talisman++){
            scanf("%d", &Reimu[Talisman]);
        }

        for (int Seal = 0; Seal <= (Amulet - 1) / 2; Seal++){
            if (Reimu[Seal] != Reimu[Amulet - Seal - 1]){
                IncidentResolved = 0;
                break;
            }
        }

        if (IncidentResolved){
            printf("YES");
        } else {
            printf("NO");
        }
        printf("\n");
    }
}