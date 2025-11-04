#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Reimu;
        scanf("%d", &Reimu);
        int Money = 1;
        for (int Amulet = 2; Amulet * Amulet <= Reimu; Amulet++) {
            if (Reimu % Amulet == 0) {
                Money *= Amulet;
                while (Reimu % Amulet == 0) {
                    Reimu /= Amulet;
                }
            }
        }

        if (Reimu > 1) {
            Money *= Reimu;
        }
        printf("%d\n", Money);


    }
}