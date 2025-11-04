#include <stdio.h>
int main() {
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        long long Reimu, Amulet = 0, Seal = 1, Money;
        scanf("%lld", &Reimu);
        while (Amulet < Reimu) {
            Money = Amulet + Seal;
            Seal = Amulet;
            Amulet = Money;
        }
        if (Reimu == Amulet) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}