#include <stdio.h>

int main(){

    int fairy;
    scanf("%d", &fairy);
    for (int Bullet = 1; Bullet <= fairy; Bullet++){
        
        int Amulet, Spark, Barrier;
        scanf("%d %d %d", &Amulet, &Spark, &Barrier);
        int Reimu[Amulet], Marisa[Spark];
        for (int Givemedonationpleaseongodbruv = 0; Givemedonationpleaseongodbruv < Amulet; Givemedonationpleaseongodbruv++){
            scanf("%d", &Reimu[Givemedonationpleaseongodbruv]);
        }
        for (int Iate13slicesofbread = 0; Iate13slicesofbread < Spark; Iate13slicesofbread++){
            scanf("%d", &Marisa[Iate13slicesofbread]);
        }

        printf("Test %d:\n", Bullet);
        
        for (int DrunkShrineMaiden = 0; DrunkShrineMaiden < Barrier; DrunkShrineMaiden++){
            printf("%d ", Reimu[DrunkShrineMaiden]);
        }

        for (int MarisaStoleThePreciousThing = 0; MarisaStoleThePreciousThing < Spark; MarisaStoleThePreciousThing++){
            printf("%d ", Marisa[MarisaStoleThePreciousThing]);
        }

        for (int AscensionKick = Barrier; AscensionKick < Amulet; AscensionKick++){
            printf("%d ", Reimu[AscensionKick]);
        }


        printf("\n");


    }

}