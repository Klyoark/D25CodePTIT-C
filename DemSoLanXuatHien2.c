#include <stdio.h>

int main(){

    int fairy;
    scanf("%d", &fairy);
    for (int Bullet = 1; Bullet <= fairy; Bullet++){
        int Knife;
        scanf("%d", &Knife);
        int Sakuya[Knife], Maid[100001] = {}, Meiling[Knife], Rainbow = 0;

        for (int Servant = 0; Servant < Knife; Servant++){
            scanf("%d", &Sakuya[Servant]);
            Maid[Sakuya[Servant]]++;
            if (Maid[Sakuya[Servant]] == 1){
                Meiling[Rainbow] = Sakuya[Servant];
                Rainbow++;
            }
        }

        printf("Test %d:\n", Bullet);

        for (int Servant = 0; Servant < Rainbow; Servant++){
            printf("%d xuat hien %d lan\n", Meiling[Servant], Maid[Meiling[Servant]]);
            Maid[Meiling[Servant]] == 0;
        }

    }

}