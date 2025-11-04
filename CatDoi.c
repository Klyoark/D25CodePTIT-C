#include <stdio.h>
#include <string.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        char Reimu[32];
        scanf("%s", &Reimu);
        int Fly = strlen(Reimu);

        long long Money = 0;
        for (int Amulet = 0; Amulet <= Fly - 1; Amulet++){
            if (Reimu[Amulet] == '0' || Reimu[Amulet] == '8' || Reimu[Amulet] == '9'){
                Money = Money * 10;
            }
            else if (Reimu[Amulet] == '1'){
                Money = Money * 10 + 1;
            }
            else {
                Money = -1;
                break;
            }
        }
        if (Money > 0){
            printf("%lld\n", Money);
        } else {
            printf("INVALID\n");
        }
    }
    
}