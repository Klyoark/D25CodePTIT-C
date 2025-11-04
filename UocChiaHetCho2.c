#include <stdio.h>
#include <math.h>

int main(){

    int fairy;
    scanf("%d", &fairy);

    while (fairy--){
        int Reimu;
        scanf("%d", &Reimu);
        int Donation = 0;
        for (int Talisman = 1; Talisman * Talisman <= Reimu; Talisman++){
            if (Reimu % Talisman == 0){
                if (Talisman % 2 == 0){
                    Donation++;
                }
                if ((Reimu / Talisman) % 2 == 0 && Talisman != (Reimu / Talisman)){
                    Donation++;
                }
                
            }
        }
        printf("%d\n", Donation);

    }

}