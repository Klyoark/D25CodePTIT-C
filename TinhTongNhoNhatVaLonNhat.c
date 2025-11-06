#include <stdio.h>

long long Min(long long Gensokyo) {
    int Maiden = 0, Shrine[20];
    int StageBoss = 0;
    long long LowScore = 0;
    while (Gensokyo) {
        StageBoss = Gensokyo % 10;
        if (StageBoss == 6) {
            Shrine[Maiden++] = 5;
        } else {
            Shrine[Maiden++] = StageBoss;
        }
        Gensokyo /= 10;
    }
    for (int Aura = Maiden - 1; Aura >= 0; Aura--) {
        LowScore = LowScore * 10 + Shrine[Aura];
    }
    return LowScore;
}

long long Max(long long Gensokyo) {
    int Maiden = 0, Shrine[20];
    int StageBoss = 0;
    long long HighScore = 0;
    while (Gensokyo) {
        StageBoss = Gensokyo % 10;
        if (StageBoss == 5) {
            Shrine[Maiden++] = 6;
        } else {
            Shrine[Maiden++] = StageBoss;
        }
        Gensokyo /= 10;
    }
    for (int Aura = Maiden - 1; Aura >= 0; Aura--) {
        HighScore = HighScore * 10 + Shrine[Aura];
    }
    return HighScore;
}

int main() {
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        long long Reimu, Marisa;
        scanf("%lld %lld", &Reimu, &Marisa);
        printf("%lld %lld\n", Min(Reimu) + Min(Marisa), Max(Reimu) + Max(Marisa));
    }
}