#include <stdio.h>

int Number_of_Spellcards;

void ResolveTheIncident(int Talisman, int Items, char Reimu[]){
    
    if (Talisman == Number_of_Spellcards) {
        Reimu[Talisman] = '\0';
        printf("%s ", Reimu);
        return;
    }

    for (int currentItem = Items; currentItem <= 9; currentItem++) {
        Reimu[Talisman] = currentItem + '0';
        ResolveTheIncident(Talisman + 1, currentItem, Reimu);
    }
}

int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){

        scanf("%d", &Number_of_Spellcards);
        char Reimu[16];

        for (int Items = 1; Items <= 9; Items++){
            Reimu[0] = Items + '0';
            ResolveTheIncident(1, Items, Reimu);

        }
        printf("\n");

    }
}

