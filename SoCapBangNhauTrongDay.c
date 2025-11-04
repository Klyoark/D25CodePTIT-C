#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){

        int Knife;
        scanf("%d", &Knife);
        int Sakuya[Knife + 1];
        for (int Edge = 1; Edge <= Knife; Edge++){
            scanf("%d", &Sakuya[Edge]);
        }
        Sakuya[0] = 0;

        int HourHand = 0;
        for (int Maid = 1; Maid <= Knife; Maid++){
            if (Sakuya[Maid] == Sakuya[Maid - 1]){
                HourHand++;
            }
        }
        printf("%d\n", HourHand);


    }
}