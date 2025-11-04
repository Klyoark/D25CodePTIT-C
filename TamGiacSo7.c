#include <stdio.h>
 
int main(){
    int Cirno;
    scanf("%d", &Cirno);
    int Daiyousei;
    for (int Ice = 1; Ice <= Cirno; Ice++) {
        Daiyousei = Ice;
        for (int Cold = 1; Cold <= Ice; Cold++) {
            printf("%d ", Daiyousei);
            Daiyousei += Cirno - Cold;
        }
        printf("\n");
    }
}