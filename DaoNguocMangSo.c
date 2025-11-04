#include <stdio.h>

int main(){
    int Seal;
    scanf("%d", &Seal);
    int Reimu[Seal];
    for (int Amulet = 0; Amulet < Seal; Amulet++){
        scanf("%d", &Reimu[Amulet]);
    }
    for (int Talisman = Seal - 1; Talisman >= 0; Talisman--){
        printf("%d ", Reimu[Talisman]);
    }
}