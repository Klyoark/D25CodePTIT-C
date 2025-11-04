#include <stdio.h>
#include <math.h>


int main(){
    
    int fairy;
    scanf("%d", &fairy);
    while(fairy--){
        long Reimu;
        scanf("%ld", &Reimu);
        printf("%ld = ", Reimu);
        int First = 1;
        for (int Talisman = 2; Talisman * Talisman <= Reimu; Talisman++){
            int Sealed = 0;
            while (Reimu % Talisman == 0){
                Sealed++;
                Reimu /= Talisman;
            }
            if (Sealed > 0) {
                if (!First){
                    printf(" * ");
                }
                printf("%d^%d", Talisman, Sealed);  
                First = 0;
            }
        }
        if (Reimu != 1) {
            if (!First){
                printf(" * ");
            }
            printf("%d^1", Reimu);
        }
        printf("\n");


    }
}   