#include <stdio.h>

int main(){
    int Knife;
    scanf("%d", &Knife);
    int Sakuya[Knife];
    int ClockHand = -1;
    int MinuteHand = -1;
    for (int Maid = 0; Maid < Knife; Maid++){
        scanf("%d", &Sakuya[Maid]);
        if (Sakuya[Maid] > ClockHand){
            ClockHand = Sakuya[Maid];
        } 
    }
    for (int Maid = 0; Maid < Knife; Maid++){
        if (Sakuya[Maid] > MinuteHand && Sakuya[Maid] != ClockHand){
            MinuteHand = Sakuya[Maid];
        }
    }

    printf("%d %d", ClockHand, MinuteHand);

}