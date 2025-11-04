#include <stdio.h>

int main(){
    int Knife;
    scanf("%d", &Knife);
    int Sakuya[Knife];
    for (int Maid = 0; Maid < Knife; Maid++){
        scanf("%d", &Sakuya[Maid]);
    }
    int Remilia;
    scanf("%d", &Remilia);
    for (int Servant = Knife - Remilia; Servant < Knife; Servant++){
        printf("%d ", Sakuya[Servant]);
    }
    for (int Servant = 0; Servant < Knife - Remilia; Servant++){
        printf("%d ", Sakuya[Servant]);
    }
}