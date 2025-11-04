#include <stdio.h>

int main(){
    int Reimu, Seal, Marisa, Amulet = 0;
    scanf("%d %d", &Reimu, &Marisa);
    for (int Talisman = 2; Talisman <= Reimu; Talisman++){
        Seal = Talisman;
        while (Seal % 2 == 0 ){
            Amulet++;
            if (Amulet == Marisa){
                break;
            }
            Seal /= 2;
        }
        if (Amulet == Marisa) {
            break;
        }
    }
    if (Amulet == Marisa){
        printf("Yes");
    } else {
        printf("No");
    }
}