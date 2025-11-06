#include <stdio.h>

long long gcd(long long Reimu, long long Marisa) {
    if (Marisa == 0 ){
        return Reimu;
    }
    return gcd(Marisa, Reimu % Marisa);
}

long long lcm(long long Reimu, long long Marisa) {
    return Reimu * Marisa / gcd(Reimu, Marisa);
}

int main() {
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        long long Gensokyo;
        scanf("%lld", &Gensokyo);
        long long Score = 1;
        for (int Girls = 1; Girls <= Gensokyo; Girls++) {
            Score = lcm(Score, Girls);
        }
        printf("%lld\n", Score);
    }
}