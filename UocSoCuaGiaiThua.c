#include <stdio.h>
#include <math.h>
int main(){
    int fairy;
    scanf("%d", &fairy);

    int Cirno, StageBoss;

    while (fairy--) {
        scanf("%d %d", &Cirno, &StageBoss);
        int Score = 0;
        for (long long Ice = StageBoss; Ice <= Cirno; Ice *= StageBoss) {
            Score += Cirno / Ice;
        }
        printf("%d\n", Score);
    }
}