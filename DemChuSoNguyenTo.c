#include <stdio.h>

int main(){
    long long Reimu;
    scanf("%lld", &Reimu);
    int two = 0;
    int three = 0;
    int five = 0;
    int seven = 0;
    while (Reimu != 0){
        int Fairy = Reimu % 10;
        switch (Fairy){
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 5:
                five++;
                break;
            case 7:
                seven++;
                break;
        }

        Reimu /= 10;
    }

    if (two > 0){
        printf("2 %d\n", two);
    }
    if (three > 0){
        printf("3 %d\n", three);
    }
    if (five > 0){
        printf("5 %d\n", five);
    }
    if (seven > 0){
        printf("7 %d\n", seven);
    }
}