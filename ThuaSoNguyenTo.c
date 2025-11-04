#include <stdio.h>
#include <math.h>
//check some prime chia duoc or not -> chia so prime do ---??????---> loop

int main(){
    
    int fairy;
    scanf("%d", &fairy);
    while(fairy--){
        long Reimu;
        scanf("%ld", &Reimu);
        for (int Talisman = 2; Talisman <= sqrt(Reimu); Talisman++){
            while (Reimu % Talisman == 0){
                printf("%d ", Talisman);
                Reimu /= Talisman;
            }
        }
        if (Reimu != 1) {
            printf("%d", Reimu);
        }
        printf("\n");
    }
}