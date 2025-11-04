#include <stdio.h>

int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){

        int Ice;
        scanf("%d", &Ice);
        int Cirno[Ice];
        for (int CirnoMathClass = 0; CirnoMathClass < Ice; CirnoMathClass++){
            scanf("%d", &Cirno[CirnoMathClass]);
        }
        int Baka = 1;
        int StageBoss = Cirno[0];

        for (int Snow = 1; Snow < Ice; Snow++){
            if (Cirno[Snow] >= StageBoss){
                StageBoss = Cirno[Snow];
                Baka++;
            }
        }

        printf("%d\n", Baka);
    }
}