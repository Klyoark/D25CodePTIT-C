#include <stdio.h>
#include <math.h>

int main(){
    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Reimu, Marisa, Remilia, Flandre;
        scanf("%d %d %d %d", &Reimu, &Marisa, &Remilia, &Flandre);
        if (abs(Reimu - Remilia) == abs(Marisa - Flandre)){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}