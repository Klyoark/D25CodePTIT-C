#include <stdio.h>
#include <math.h>


int main(){
    
    int fairy;
    int dummy = 1;
    scanf("%d", &fairy);
    while(dummy <= fairy){
        long Reimu;
        scanf("%ld", &Reimu);
        printf("Test %d: ", dummy);
        for (int Talisman = 2; Talisman <= sqrt(Reimu); Talisman++){
            int Sealed = 0;
            while (Reimu % Talisman == 0){
                Sealed++;
                Reimu /= Talisman;
            }
            if (Sealed > 0) {
                printf("%d(%d) ", Talisman, Sealed);
            }
        }
        if (Reimu != 1) {
            printf("%d(1)", Reimu);
        }
        printf("\n");

        dummy++;
    }
}   