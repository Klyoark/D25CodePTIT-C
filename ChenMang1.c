#include <stdio.h>

int main(){
    int Amulet, Spark, Barrier;
    scanf("%d %d", &Amulet, &Spark);
    int Reimu[Amulet], Marisa[Spark];
    for (int Givemedonationpleaseongodbruv = 0; Givemedonationpleaseongodbruv < Amulet; Givemedonationpleaseongodbruv++){
        scanf("%d", &Reimu[Givemedonationpleaseongodbruv]);
    }
    for (int Iate13slicesofbread = 0; Iate13slicesofbread < Spark; Iate13slicesofbread++){
        scanf("%d", &Marisa[Iate13slicesofbread]);
    }

    scanf("%d", &Barrier);

    for (int DrunkShrineMaiden = 0; DrunkShrineMaiden < Barrier; DrunkShrineMaiden++){
        printf("%d ", Reimu[DrunkShrineMaiden]);
    }

    for (int MarisaStoleThePreciousThing = 0; MarisaStoleThePreciousThing < Spark; MarisaStoleThePreciousThing++){
        printf("%d ", Marisa[MarisaStoleThePreciousThing]);
    }

    for (int AscensionKick = Barrier; AscensionKick < Amulet; AscensionKick++){
        printf("%d ", Reimu[AscensionKick]);
    }

}