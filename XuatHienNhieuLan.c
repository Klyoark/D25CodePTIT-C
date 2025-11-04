#include <stdio.h>

int main(){
    
    int Knife;
    scanf("%d", &Knife);
    int Sakuya[Knife], Maid[100001] = {}, Timeline = 0;

    for (int Servant = 0; Servant < Knife; Servant++){
        scanf("%d", &Sakuya[Servant]);
        Maid[Sakuya[Servant]]++;
    }

    for (int Servant = 0; Servant < Knife; Servant++){
        if (Maid[Sakuya[Servant]] > 1){
            printf("%d ", Sakuya[Servant]);
            Timeline = 1;
            Maid[Sakuya[Servant]] = 1;
        }
    }
    if (!Timeline){
        printf("0");
    }
}
