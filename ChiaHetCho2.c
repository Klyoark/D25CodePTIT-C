#include <stdio.h>


int main(){

    int fairy;
    scanf("%d", &fairy);
    while(fairy--){
        long long Reimu;
        scanf("%lld", &Reimu);
        int Seal = 0;
        for (int Talisman = 1; Talisman * Talisman <= Reimu; Talisman++){
            if (Reimu % Talisman == 0){
                if (Talisman % 2 == 0){
                    Seal++;
                }
                if ((Reimu / Talisman ) != Talisman && (Reimu / Talisman ) % 2 == 0){
                    Seal++;
                }
            }
        }
        printf("%d\n", Seal);
    }

}