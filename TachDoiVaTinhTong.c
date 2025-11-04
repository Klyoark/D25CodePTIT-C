#include <stdio.h>
#include <string.h>

int main(){
    char Reimu[205];
    fgets(Reimu, sizeof(Reimu), stdin);
    Reimu[strcspn(Reimu, "\n")] = '\0';

    char LeftBoss[205], RightBoss[205], Money[205];

    while (strlen(Reimu) > 1) {
        int Stage = strlen(Reimu);
        int MidBoss = Stage / 2;
        strncpy(LeftBoss, Reimu, MidBoss);
        LeftBoss[MidBoss] = '\0';
        strcpy(RightBoss, Reimu + MidBoss);

        int carry = 0, k = 0;
        char TempBoundary[210];

        for (int i = strlen(LeftBoss) - 1, j = strlen(RightBoss) - 1; i >= 0 || j >= 0 || carry; i--, j--){
            int FairyA = (i >= 0) ? LeftBoss[i] - '0' : 0;
            int FairyB = (j >= 0) ? RightBoss[j] - '0' : 0;
            int TempMoney = FairyA + FairyB + carry;

            TempBoundary[k++] = TempMoney % 10 + '0';
            carry = TempMoney / 10;
        }

        for (int i = 0; i < k; i++){
            Money[i] = TempBoundary[k - i - 1];
        }
        Money[k] = '\0';

        printf("%s\n", Money);
        strcpy(Reimu, Money);


    }
}