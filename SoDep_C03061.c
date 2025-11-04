#include <stdio.h>
#include <string.h>

char Reimu[20];

int ResolveTheIncident(){
    int Fly = strlen(Reimu);
    if (Reimu[0] - '0' != (Reimu[Fly - 1] - '0') * 2 && (Reimu[0] - '0') * 2 != Reimu[Fly - 1] - '0'){
        return 0;
    }
    for (int Amulet = 1; Amulet <= (Fly - 1) / 2; Amulet++){
        if (Reimu[Amulet] != Reimu[Fly - 1 - Amulet]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        scanf("%s", &Reimu);
        if (ResolveTheIncident()){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}