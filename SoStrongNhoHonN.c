#include <stdio.h>
#include <math.h>

int StrongMaiden(int MakeshiftTalisman){
    int Talisman = MakeshiftTalisman;
    int Money = 0;
    while (Talisman != 0){
        int Seal = Talisman % 10;
        int Donation = 1;
        for (int fairy = 1; fairy <= Seal; fairy++){
            Donation *= fairy;
        }
        Money += Donation;
        Talisman /= 10; 
    }
    if (Money == MakeshiftTalisman){
            return 1;
        } else {
            return 0;
    }


}

int main(){
    int Reimu;
    scanf("%d", &Reimu);
    for (int Talisman = 1; Talisman < Reimu; Talisman++){
        if (StrongMaiden(Talisman)){
            printf("%d ", Talisman);
        }
    }
    
}