#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int Remilia, Flandre, Sakuya;;
    scanf("%d %d %d", &Remilia, &Flandre, &Sakuya);

    int Mansion = Remilia;

    if (Mansion > Flandre){
        Mansion = Flandre;
    }

    if (Mansion > Sakuya){
        Mansion = Sakuya;
    }   

    printf("%d", Mansion);

}