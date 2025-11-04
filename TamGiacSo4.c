#include <stdio.h>
#include <math.h>

int main(){
    int Reimu;
    scanf("%d", &Reimu);
    for (int Amulet = 1; Amulet <= Reimu; Amulet++) {
        for (int Yen = Reimu - Amulet; Yen > 0; Yen--) {
            printf("~");
        }
        for (int Seal = -Amulet + 1; Seal <= Amulet - 1; Seal++) {
            printf("%d", 2 * (Amulet - abs(Seal) - 1) + 1);
        }
        printf("\n");
    }
}