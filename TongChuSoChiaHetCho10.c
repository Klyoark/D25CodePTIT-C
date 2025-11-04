#include <stdio.h>
#include <math.h>


int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--) {
        long Reimu;
        scanf("%ld", &Reimu);
        long Donation = 0;
        while (Reimu != 0){
            Donation += Reimu % 10;
            Reimu /= 10;
        }
        if (Donation % 10 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}