//Tam Giac Pascal (n,k) = n!/k!(n-k)!

#include <stdio.h>
#include <math.h>
int Reimu;
void ResolveTheIncident(int Talisman[], int Seal[]){
    for (int Donation = 1; Donation <= Reimu; Donation++){
        int Shrine = Talisman[Donation];
        Talisman[Donation] = Seal[Donation];
        Seal[Donation] = Shrine;
    }
}

int main(){
    scanf("%d", &Reimu);

    int Talisman[Reimu + 2];
    int Seal [Reimu + 2];
    Talisman[0] = 0;
    Talisman[1] = 1;
    
    for (int Spark = 2; Spark <= Reimu + 1; Spark++) {
        for (int Furnace = 1; Furnace < Spark; Furnace++){
            Seal[Furnace] = Talisman[Furnace] + Talisman[Furnace - 1];
            printf("%d ", Talisman[Furnace]);
        }
        Seal[Spark] = 1;
        printf("\n");
        ResolveTheIncident(Talisman, Seal);
    }
}
     