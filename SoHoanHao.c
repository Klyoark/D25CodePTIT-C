#include <stdio.h>


int main(){
    long Reimu;
    int IncidentResolved = 0;
    int Money = 0;
    scanf("%ld", &Reimu);

    if (Reimu == 0 || Reimu == 1){
        IncidentResolved = 0;
    }

    for (int Talisman = 1; Talisman <= Reimu / 2; Talisman++){
        if (Reimu % Talisman == 0) {
            Money += Talisman;
        }
    }
    if (Money == Reimu) {
        IncidentResolved = 1;
    }
    printf("%d", IncidentResolved);
}