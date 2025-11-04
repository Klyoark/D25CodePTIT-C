#include <stdio.h>
#include <math.h>


int ResolveTheIncident(long long int Reimu){
        while (Reimu != 0){
            if (Reimu % 2 == 0){
                Reimu /= 10;
            } else {
                return 0;
            }
        }
        return 1;
}

int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){

        long long int Reimu;
        scanf("%lld", &Reimu);
        if (ResolveTheIncident(Reimu)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }


    }

}