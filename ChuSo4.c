#include <stdio.h>
#include <math.h>

int ResolveTheIncident(int Amulet){
    int Maiden = Amulet;
    int Talisman = 0;
    int Money = 0;
    while (Maiden != 0){
        int Seal = Maiden % 10;
        if (Seal == 4){
            return 0;
        }
        Talisman = Talisman * 10 + Seal;
        Money += Seal;
        Maiden /= 10;
    }
    if (Talisman == Amulet && Money % 10 == 0){
        return 1;
    }
    return 0;


}

int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Reimu;
        scanf("%d", &Reimu);
        for (int Amulet = (int)pow(10, Reimu - 1); Amulet <= (int)pow(10, Reimu); Amulet++){
            if (ResolveTheIncident(Amulet)){
                printf("%d ", Amulet);
            }
        }
        printf("\n");
    }

}