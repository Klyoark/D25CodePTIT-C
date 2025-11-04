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
    int fairy;
    scanf("%d", &fairy);
    for (int Bullet = 1; Bullet <= fairy; Bullet++){
        int Knife;
        scanf("%d", &Knife);
        int Sakuya[Knife + 1], HourHand[100005] = {};
        
        for (int Servant = 1; Servant < Knife + 1; Servant++){
            scanf("%d", &Sakuya[Servant]);
            if (!f[Sakuya[Servant]]){
                HourHand[Sakuya[Servant]]++;
            }
        }
        printf("Test %d:\n", Bullet);
        for (int Maid = 1; Maid <= 100000; Maid++){
            if (HourHand[Maid] != 0){
                printf("%d xuat hien %d lan\n", Maid, HourHand[Maid]);
            }
        }
    }
}