#include <stdio.h>
#include <math.h>

int Fairy_of_the_lake(int Ice){
    int Score = Ice;
    int Fumo = 0, Figure = 0;
    int cur_Prank;
    while (Ice) {
        cur_Prank = Ice % 10;
        Fumo += cur_Prank;
        Figure = Figure * 10 + cur_Prank;
        Ice /= 10;
    }
    if (Score == Figure && Fumo % 10 == 0) {
        return 1;
    }
    return 0;


}

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        int Cirno;
        scanf("%d", &Cirno);
        int pranked = 0;
        int Ice1 = pow(10, Cirno - 1), Ice2 = pow(10, Cirno) - 1;
        for (int Ice = Ice1; Ice <= Ice2; Ice++) {
            if (Fairy_of_the_lake(Ice)) {
                pranked++;
            } 
        }
        printf("%d\n", pranked);
    }
}