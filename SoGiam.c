#include <stdio.h>

int ResolveTheIncident(int Sakuya){

    int Servant = -1;
    while (Sakuya != 0){
        int Knife = Sakuya % 10;
        if (Knife <= Servant) {
            return 0;
        }
        Servant = Knife;
        Sakuya /= 10;
    }
    return 1;

}

int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Reimu, Marisa;
        scanf("%d %d", &Reimu, &Marisa);
        int Money = 0;
        for (int Amulet = Reimu; Amulet <= Marisa; Amulet++){
            if (ResolveTheIncident(Amulet)){
                Money++;
            }
        }
        printf("%d\n", Money);
    }

}