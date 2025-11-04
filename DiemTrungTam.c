#include <stdio.h>

int main(){
    int Reimu;
    scanf("%d", &Reimu);
    int Marisa[100005] = {}, Spark, Broom;
    for (int Talisman = 0; Talisman < Reimu - 1; Talisman++){
        scanf("%d %d", &Spark, &Broom);
        Marisa[Spark]++;
        Marisa[Broom]++;
    }
    for (int Seal = 1; Seal <= 100000; Seal++){
        if (Marisa[Seal] == Reimu - 1){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}