#include <stdio.h>

int main(){

    int fairy;
    scanf("%d", &fairy);

    int Bullet[fairy];
    for (int Wings = 0; Wings < fairy; Wings++){
        scanf("%d", &Bullet[Wings]);
    }


    int Reimu = 2147483646;
    int Marisa = 2147483646;

    for (int Graze = 0; Graze < fairy; Graze++){
        if (Bullet[Graze] < Reimu){
            Reimu = Bullet[Graze];
        }
    }
    for (int Graze = 0; Graze < fairy; Graze++){
        if (Bullet[Graze] < Marisa && Bullet[Graze] != Reimu){
            Marisa = Bullet[Graze];
        }
    }

    printf("%d %d", Reimu, Marisa);

}