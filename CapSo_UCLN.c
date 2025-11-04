#include <stdio.h>
#include <math.h>


int UCLN(int Cirno, int Daiyousei){
    while (Cirno != 0){
        int Lake = Cirno;
        Cirno = Daiyousei % Cirno;
        Daiyousei = Lake;
    }
    return Daiyousei;
}

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        long Reimu, Marisa, Remilia, Flandre;
        scanf("%ld %ld %ld %ld", &Reimu, &Marisa, &Remilia, &Flandre);

        if (UCLN(Reimu, Marisa) == UCLN(Remilia, Flandre)){
            printf("YES\n");
        } else {
            printf("NO\n");
    }
    }
}