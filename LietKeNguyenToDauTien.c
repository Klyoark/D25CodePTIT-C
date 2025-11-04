#include <stdio.h>

//nguyen to ver
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
    int fairy = 2; //the nto in question
    int Reimu;  //how many nto to check
    int Shrine = 0; //number of nto
    scanf("%d", &Reimu);
    while (Shrine < Reimu){
        if (IncidentResolved(fairy)){
            printf("%d\n", fairy);
            Shrine += 1;
        }
        fairy += 1;
    }
}
