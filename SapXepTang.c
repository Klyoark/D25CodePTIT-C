#include <stdio.h>
int main(){
    int Knife;
    scanf("%d", &Knife);
    int Sakuya[Knife];
    for (int Maid = 0; Maid < Knife; Maid++){
        scanf("%d", &Sakuya[Maid]);
    }

    int Ranking, StageBoss;

    for (int Maid = 1; Maid < Knife; Maid++){
        Ranking = Maid;
        StageBoss = Sakuya[Maid];
        while (Ranking > 0 && StageBoss < Sakuya[Ranking - 1]){
            Sakuya[Ranking] = Sakuya[Ranking - 1];
            Ranking--;
        }
        Sakuya[Ranking] = StageBoss;
    }

    for (int Maid = 0; Maid < Knife; Maid++){
        printf("%d ", Sakuya[Maid]);
    }

}