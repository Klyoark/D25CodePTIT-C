#include <stdio.h>


int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){


        long long Reimu;
        scanf("%lld", &Reimu);
        int Odd = 0;
        int Even = 0;

        while (Reimu != 0){
            long long Yen = Reimu % 10;
            if (Yen % 2 == 0){
                Even++;
            } else {
                Odd++;
            }
            Reimu /= 10;
        }
        printf("%d %d\n", Odd, Even);
    
    }
}