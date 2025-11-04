#include <stdio.h>
#include <math.h>


int main(){

    int Reimu;
    int Donation = 0;
    scanf("%d", Reimu);
    int Maiden = Reimu;
    
    while (Maiden != 0){
        int Shrine = Maiden % 10;
        int factorial = 1;
        for (int Talisman = 1; Talisman <= Shrine; Talisman++){
            factorial *= Talisman;
        }
        Donation += factorial;
        if (Donation > Reimu){
            break;
        }
        Maiden /= 10;
    }
    if (Donation == Reimu) {
        printf("1");
    } else {
        printf("0");
    }
}