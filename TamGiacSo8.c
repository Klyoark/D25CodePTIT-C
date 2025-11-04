#include <stdio.h>
 
int main(){
    int Cirno;
    scanf("%d", &Cirno);
    int Daiyousei, Eternity = 0;
    for (int Ice = 1; Ice <= Cirno; Ice++) {
        if (Ice % 2 == 1) {
            if (Ice == 1){
                printf("1");
                Daiyousei = 1;
            } else {
                Daiyousei += 2 * Ice - 3;
                for (int Fairy = Daiyousei; Fairy <= Daiyousei + Ice - 1; Fairy++) {
                    printf("%d ", Fairy);
                }
            }
        } else {
            Eternity += 2 * Ice - 1;
            for (int Fairy = Eternity; Fairy >= Eternity - Ice + 1; Fairy--) {
                printf("%d ", Fairy);
            }
        }
        printf("\n");
    }
}