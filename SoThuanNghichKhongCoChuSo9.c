#include <stdio.h>

int ResolveTheIncident(int Amulet){
    int Score = 0;
    int Seal = Amulet;
    int StageBoss;
    while (Amulet) {
        StageBoss = Amulet % 10;
        if (StageBoss == 9) {
            return 0;
        }
        Score = Score * 10 + StageBoss;
        Amulet /= 10;
    }
    if (Score == Seal) {
        return 1;
    }
    return 0;
}

int main(){
    int Reimu;
    int Score = 0;
    scanf("%d", &Reimu);
    for (int Amulet = 2; Amulet < Reimu; Amulet++) {
        if (ResolveTheIncident(Amulet)) {
            printf("%d ", Amulet);
            Score++;
        }
    }
    printf("\n%d", Score);
}