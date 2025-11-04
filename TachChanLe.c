#include <stdio.h>


int main(){

    int fairy;
    scanf("%d", &fairy);

    int Bullet[fairy];
    for (int Wings = 0; Wings < fairy; Wings++){
        scanf("%d", &Bullet[Wings]);
    }

    int Reimu[fairy], Marisa[fairy];
    int Amulet = 0;
    int Spark = 0;

    for (int Graze = 0; Graze < fairy; Graze++){
        if (Bullet[Graze] % 2 == 0){
            Reimu[Amulet] = Bullet[Graze];
            Amulet++;
        } else {
            Marisa[Spark] = Bullet[Graze];
            Spark++;
        }
    }

    for (int ongodgivemedonations = 0; ongodgivemedonations < Amulet; ongodgivemedonations++){
        printf("%d ", Reimu[ongodgivemedonations]);
    }
    printf("\n");
    for (int Iate13slicesofbread = 0; Iate13slicesofbread < Spark; Iate13slicesofbread++){
        printf("%d ", Marisa[Iate13slicesofbread]);
    }

}