#include <stdio.h>
#include <string.h>

int main(){
    int fairy;
    scanf("%d\n", &fairy);
    while (fairy--){
        char Reimu[200];
        fgets(Reimu, 200, stdin);
        Reimu[strcspn(Reimu , "\n")] = '\0';
        int Money = 1, Donation = strlen(Reimu);
        for (int Seal = 1; Seal < Donation; Seal++){
            if (Reimu[Seal] != ' ' && Reimu[Seal - 1] == ' '){
                Money++;
            }
        } 
        printf("%d\n", Money);
    }
}