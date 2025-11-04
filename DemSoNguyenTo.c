#include <stdio.h>
#include <math.h>

int Exterminated_OnebyOne(int Sakuya){
    int Teacup = 0;
    int Served = 0;
    while (Sakuya != 0){
        Teacup = Sakuya % 10;
        if (Teacup == 2 || Teacup == 3 || Teacup == 5 || Teacup == 7){
            Served = 1;
            Sakuya /= 10;
        } else {
            return 0;
        }
    }
    if (Sakuya == 0 && Served == 1){
        return 1;
    }
}

int Exterminated_Prime(int Sakuya){
    if (Sakuya < 2){
        return 0;
    } else {
        for (int Knife = 2; Knife * Knife <= Sakuya; Knife++){
            if (Sakuya % Knife == 0){
                return 0;
            }
        }
        return 1;
    }  
}

int Exterminated_ALL(int Sakuya){
    if (Exterminated_OnebyOne(Sakuya) && Exterminated_Prime(Sakuya)){
        return 1;
    } else {
        return 0;
    }
}


int main(){

    int fairy;
    scanf("%d", &fairy);
    while (fairy--){
        int Reimu, Marisa;
        int IncidentResolved = 0;
        scanf("%d %d", &Reimu, &Marisa);
        for (int Sakuya = Reimu; Sakuya <= Marisa; Sakuya++){
            if (Exterminated_ALL(Sakuya)){
                IncidentResolved++;
            }
        }
        printf("%d\n", IncidentResolved);
        
    }

}