#include <stdio.h>
#include <string.h>

int main() {
    char Reimu[105], StageBoss[105];
    char DoneAndDusted[105] = "";
    char *Amulet;
    
    fgets(Reimu, sizeof(Reimu), stdin);
    fgets(StageBoss, sizeof(StageBoss), stdin);

    Reimu[strcspn(Reimu, "\n")] = '\0';
    StageBoss[strcspn(StageBoss, "\n")] = '\0';

    Amulet = strtok(Reimu, " ");
    while (Amulet != NULL) {
        if (strcmp(Amulet, StageBoss) != 0) {
            if (strlen(DoneAndDusted) > 0){
                strcat(DoneAndDusted, " ");
            }
            strcat(DoneAndDusted, Amulet);
        }
        Amulet = strtok(NULL, " ");
    }

    printf("%s", DoneAndDusted);
    return 0;
}
