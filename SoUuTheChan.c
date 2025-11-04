#include <stdio.h>

int ResolveTheIncident(long long Reimu){

    if (Reimu % 2 == 1){
        return 0;
    }
    int Amulet = 0;
    int Money = 0;
    while (Reimu != 0){
        if ((Reimu % 10) % 2 == 0){
            Amulet++;
        } else {
            Money++;
        }
        Reimu /= 10;
    }
    if (Amulet > Money){
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