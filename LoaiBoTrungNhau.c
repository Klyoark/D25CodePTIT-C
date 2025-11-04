#include <stdio.h>
int main(){
    int Amulet;
    scanf("%d", &Amulet);
    int Reimu[Amulet];
    int Rinnosuke[100005] = {};
    int Marisa[Amulet], Spark = 0;
    for (int Seal = 0; Seal < Amulet; Seal++){
        scanf("%d", &Reimu[Seal]);
        if (!Rinnosuke[Reimu[Seal]]){
            Rinnosuke[Reimu[Seal]]++;
            if (Rinnosuke[Reimu[Seal]]){
                Marisa[Spark] = Reimu[Seal];
                Spark++;
            }
                
        }
    }
    for (int MASTASPARKU = 0; MASTASPARKU < Spark; MASTASPARKU++){
        printf("%d ", Marisa[MASTASPARKU]);
    }



}