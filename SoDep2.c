#include <stdio.h>
#include <string.h>

int ResolveTheIncident(char Reimu[]){
    int Seal = strlen(Reimu);
    int Money = 0;
    for (int Amulet = 0; Amulet <= (Seal - 1) / 2; Amulet++){
        if (Reimu[Amulet] != Reimu[Seal - Amulet - 1]){
            return 0;
        }
        Money += Reimu[Amulet] - '0';
    }
    if (!(Reimu[0] == '8' && Money % 10 == 0)){
        return 1;
    }
    return 1;
    

}

int main(){
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