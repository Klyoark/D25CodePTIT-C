#include <stdio.h>

int main(){

    int Reimu;
    scanf("%d", &Reimu);

    int Yen = 0;
    int Donation = 1;

    while (Donation < Reimu){
        int Money = Donation;
        Donation += Yen;
        Yen = Money;
    }

    if (Donation == Reimu){
        printf("1");
    } else {
        printf("0");
    }
}