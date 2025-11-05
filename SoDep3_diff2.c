#include <stdio.h>
#include <math.h>

int Fairy_of_the_lake(int Ice){
    int Score = Ice;
    int Fumo = 0, Figure = 0, six = 0;
    int cur_Prank;
    while (Ice) {
        cur_Prank = Ice % 10;
        if (cur_Prank == 6) {
            six = 1;
        }
        Fumo += cur_Prank;
        Figure = Figure * 10 + cur_Prank;
        Ice /= 10;
    }
    if (Score == Figure && Fumo % 10 == 8 && six) {
        return 1;
    }
    return 0;


}

int main(){
    int Cirno, Daiyousei;
    scanf("%d %d", &Cirno, &Daiyousei);
    if (Daiyousei < Cirno) {
        int Lake = Daiyousei;
        Daiyousei = Cirno;
        Cirno = Lake;
    }
    for (int Ice = Cirno; Ice <= Daiyousei; Ice++) {
        if (Fairy_of_the_lake(Ice)) {
            printf("%d ", Ice);
        } 
    }
}
