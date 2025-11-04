#include <stdio.h>

int ResolveTheIncident(long long Reimu){

    long long Seal = Reimu;
    long long Amulet = 0;
    long long Money = 0;
    while (Seal != 0){
        long long tmp = Seal % 10;
        if (tmp % 2 == 0){
            return 0;
        }
        Amulet = Amulet * 10 + tmp;
        Money += tmp;
        Seal /= 10;
    }

    if (Amulet == Reimu && Money % 2 == 1){
        return 1;
    }
    return 0;

}

int main(){
    int fairy;
    scanf("%d", &fairy);

    while (fairy--){
        long long Reimu;
        scanf("%lld", &Reimu);
        if (ResolveTheIncident(Reimu)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}