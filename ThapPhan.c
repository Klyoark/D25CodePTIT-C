#include <stdio.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while(fairy--){
        double Reimu;
        scanf("%lf", &Reimu);
        printf("%.15lf\n", 1 / Reimu);
    }

}