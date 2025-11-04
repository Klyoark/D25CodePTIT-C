#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char Reimu[32];
    scanf("%s", &Reimu);
    int height = strlen(Reimu);
    if (height == 1){
        printf("%s", Reimu);
    }
    if (Reimu[height - 1] != '0'){
        printf("%c", Reimu[height - 1]);
    }
    for (int talisman = 1; talisman < height - 1; talisman++){
            printf("%c", Reimu[talisman]);
    }
    printf("%c", Reimu[0]);
}

    

