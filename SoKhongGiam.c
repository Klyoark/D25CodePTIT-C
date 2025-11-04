#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){

        char Reimu[64];
        scanf("%s", &Reimu);
        int IncidentResolved = 0;

        for (int Talisman = 1; Talisman < strlen(Reimu); Talisman++) {
            if (Reimu[Talisman] < Reimu[Talisman - 1]) {
                IncidentResolved = 1;
                break;
            }
        }
        if (IncidentResolved) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }


}