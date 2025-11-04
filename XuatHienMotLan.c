#include <stdio.h>

int main(){
        
    int Knife;
    scanf("%d", &Knife);
    int Sakuya[Knife], Maid[100001] = {};

    for (int Servant = 0; Servant < Knife; Servant++){
        scanf("%d", &Sakuya[Servant]);
        Maid[Sakuya[Servant]]++;
    }

    int Clock = 0;

    for (int Servant = 0; Servant < Knife; Servant++){
        if (Maid[Sakuya[Servant]] == 1){
            Clock++;
        }
    }
    printf("%d\n", Clock);

    for (int Servant = 0; Servant < Knife; Servant++){
        if (Maid[Sakuya[Servant]] == 1){
            printf("%d ", Sakuya[Servant]);
        }
    }


}