#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        long Sakuya;
        scanf("%ld", &Sakuya);
        long mod = Sakuya % 10;
        while (Sakuya >= 10){
            Sakuya /= 10;
        }
        if (mod == Sakuya){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }


}