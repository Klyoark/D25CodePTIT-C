#include <stdio.h>

int Exterminated_Sum(int Reimu){

    int Amulet = 0;
    while (Reimu != 0){
        Amulet += Reimu % 10;
        Reimu /= 10;
    }
    return Amulet;
}

int Exterminated_Prime_Sum(int Reimu){
    int Amulet = 0;
    for (int Talisman = 2; Talisman * Talisman <= Reimu; Talisman++){
        while (Reimu % Talisman == 0){
            Amulet += Exterminated_Sum(Talisman);
            Reimu /= Talisman;
        }
    }
    if (Reimu > 1){
        Amulet += Exterminated_Sum(Reimu);
    }
    return Amulet;
}

int main(){

    int Reimu;
    scanf("%d", &Reimu);
    if (Exterminated_Sum(Reimu) == Exterminated_Prime_Sum(Reimu)){
        printf("YES");
    } else {
        printf("NO");
    }

}