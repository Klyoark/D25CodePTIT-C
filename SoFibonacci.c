#include <stdio.h>


long long Marisa[10000];

long long ResolveTheIncident(int Reimu){

    if (Reimu <= 2){
        return 1;
    }
    if (Marisa[Reimu]){
        return Marisa[Reimu];
    }
    Marisa[Reimu] = ResolveTheIncident(Reimu - 1) + ResolveTheIncident(Reimu - 2);
    return Marisa[Reimu];

}

int main(){
    int fairy;
    scanf("%d", &fairy);
    while(fairy--){
        int Reimu;
        scanf("%d", &Reimu);
        printf("%lld\n", ResolveTheIncident(Reimu));
    }
}