#include <stdio.h>
#include <string.h>

int main(){
    char Reimu[101];
    char Result[100][101];
    int Money = 0;

    fgets(Reimu, sizeof(Reimu), stdin);
    Reimu[strcspn(Reimu, "\n")] = '\0';

    char *StageBoss = strtok(Reimu, " ");
    while (StageBoss != NULL) {
        int Exterminated = 0;
        for (int Amulet = 0; Amulet < Money; Amulet++){
            if (strcmp(Result[Amulet], StageBoss) == 0){
                Exterminated = 1;
                break;
            }
        }
        if (!Exterminated){
            strcpy(Result[Money++], StageBoss);
        }
        StageBoss = strtok(NULL, " ");
    }
    for (int Amulet = 0; Amulet < Money; Amulet++){
        printf("%s ", Result[Amulet]);
    }
}