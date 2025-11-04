#include <stdio.h>
#include <string.h>

int main(){

    char Reimu[32];
    scanf("%s", &Reimu);
    printf("%c %c", Reimu[0], Reimu[strlen(Reimu) - 1]);


}