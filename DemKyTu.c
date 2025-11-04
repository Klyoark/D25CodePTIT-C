#include <stdio.h>
#include <string.h>

int main(){
    char Reimu[100000];
    fgets(Reimu, 100000, stdin);
    Reimu[strcspn(Reimu, "\n")] = '\0';

    int Amulet = strlen(Reimu);
    int Money = 0, Donation = 0, Shrine = 0;
    for (int Seal = 0; Seal < Amulet; Seal++){
        if (Reimu[Seal] >= 65 && Reimu[Seal] <= 90){
            Money++;
        } else if (Reimu[Seal] >= 97 && Reimu[Seal] <= 122) {
            Money++;
        } else if (Reimu[Seal] >= 48 && Reimu[Seal] <= 57) {
            Donation++;
        } else {
            Shrine++;
        }
    }
    printf("%d %d %d", Money, Donation, Shrine);

}