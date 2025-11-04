#include <stdio.h>

int f[100005];

int sieve(){
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 100000; i++){
        if (!f[i]){
            for (int j = i * i; j < 100000; j += i ){
                f[j] = 1;
            }
        }
    }
}

int main(){
    sieve();
    int Knife;
    scanf("%d", &Knife);
    int Sakuya[Knife + 1], ClockHand = 0;
    int Meiling[100005] = {};

    for (int Servant = 1; Servant < Knife + 1; Servant++){
        scanf("%d", &Sakuya[Servant]);
        if (!f[Sakuya[Servant]]){
            Meiling[ClockHand] = Sakuya[Servant];
            ClockHand++;
        }
    }
    printf("%d ", ClockHand);
    for (int Minute = 0; Minute < ClockHand; Minute++){
        printf("%d ", Meiling[Minute]);
    }


}