#include <stdio.h>
#include <math.h>

int Exterminated_Prime(int Reimu) {
    int IncidentResolved = 1;
    if (Reimu <= 1) {
        IncidentResolved = 0;
    } else {
        for (int i = 2; i <= Reimu / 2; ++i) {
            if (Reimu % i == 0) {
                IncidentResolved = 0;
                break;
            }
        }
    }
    if (IncidentResolved == 1) {
        return 1;
    } else {
        return 0;
    }
}

int Exterminated_Total(int Reimu){
    long Donation = 0;
    while (Reimu != 0){
        Donation += Reimu % 10;
        Reimu /= 10;
    }
    return Donation;
}

int Exterminated_Fib(int Reimu){
    int Yen = 0;
    int Donation = 1;

    while (Donation < Reimu){
        int Money = Donation;
        Donation += Yen;
        Yen = Money;
    }

    if (Donation == Reimu){
        return 1;
    } else {
        return 0;
    }
}


int main(){
    int Reimu, Marisa;
    scanf("%d %d", &Reimu, &Marisa);

    if (Reimu > Marisa){
        int Shrine = Reimu;
        Reimu = Marisa;
        Marisa = Shrine;
    }
    
    for (int Talisman = Reimu; Talisman <= Marisa; Talisman++){
        int Donation = Exterminated_Total(Talisman);
        if (Exterminated_Fib(Donation) && Exterminated_Prime(Talisman)){
            printf("%d ", Talisman);
        }
    }
}