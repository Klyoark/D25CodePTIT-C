#include <stdio.h>
#include <string.h>

int f[12];

void sieve(){
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 10; i++){
        if (!f[i]){
            for (int j = i * i; j <= 10; j += i){
                f[j] = 1;
            }
        }
    }
}

int ResolveTheIncident(char Reimu[]){
    int Seal = strlen(Reimu);
    for (int Amulet = 0; Amulet <= (Seal - 1) / 2; Amulet++){
        if (f[Reimu[Amulet] - '0'] || Reimu[Amulet] != Reimu[Seal - Amulet - 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    sieve();
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        char Reimu[1000];
        scanf("%s", &Reimu);
        if (ResolveTheIncident(Reimu)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}