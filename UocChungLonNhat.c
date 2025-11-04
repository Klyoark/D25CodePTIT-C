#include <stdio.h>
#include <math.h>

//Euclid??

int Uoc(int Reimu, int Marisa){
    while (Reimu != 0){
        int Shrine = Reimu;
        Reimu = Marisa % Reimu;
        Marisa = Shrine;
    }
    return Marisa;
}


int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Reimu;
        int Marisa;
        scanf("%d %d", &Reimu, &Marisa);
        printf("%d\n", Uoc(Reimu, Marisa));
    }
}