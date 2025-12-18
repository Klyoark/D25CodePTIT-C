#include <stdio.h>
#include <math.h>
int main(){
    int fairy;
    scanf("%d", &fairy);

    int Cirno, StageBoss;

    while (fairy--) {
        scanf("%d %d", &Cirno, &StageBoss);
        int Score = 0;
        while (Cirno > 0) {
            Cirno /= StageBoss;
            Score += Cirno;
        }
        printf("%d\n", Score);
    }
}