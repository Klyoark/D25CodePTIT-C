#include <stdio.h>
#include <math.h>


int main(){

    int Reimu;
    scanf("%d", &Reimu);

    for (int Seal = -Reimu + 1; Seal <= Reimu - 1; Seal++){
        for (int Amulet = -Reimu + 1; Amulet <= Reimu - 1; Amulet++){
            if (abs(Seal) >= abs(Amulet)) {
                printf("%d", abs(Seal) + 1);
            } else {
                printf("%d", abs(Amulet) + 1);
            }
        }
        printf("\n");
    }
 
}