#include <stdio.h>

int IncidentResolved(int Seal){
    if (Seal < 2){
        return 0;
    } else {
        for (int Bullet = 2; Bullet * Bullet <= Seal; Bullet++){
            if (Seal % Bullet == 0){
                return 0;
            }
        }
        return 1;
    }  
}


int main() {

    int Reimu;
    int Shrine = 0;
    scanf("%d", &Reimu);
        for (int Talisman = 2; Talisman < Reimu; Talisman++){
            if (IncidentResolved(Talisman)){
                printf("%d\n", Talisman);
            }
        }
}
