#include <stdio.h>
int f[100005];
void sieve(){
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 100000; i++){
        if (!f[i]) {
            for (int j = i * i; j < 100000; j += i) {
                f[j] = 1;
            }
        }
    }
}

int ResolveTheIncident(int Amulet){
    int Score = 0;
    int Seal = Amulet;
    while (Amulet) {
        Score += Amulet % 10;
        Amulet /= 10;
    }
    if (Score % 5 == 0 && !f[Seal]) {
        return 1;
    }
    return 0;
}

int main(){
    sieve();
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