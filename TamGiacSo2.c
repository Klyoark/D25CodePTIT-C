#include <stdio.h>

int main(){
    int Cirno;
    scanf("%d", &Cirno);
    int fairy = 0;
    for (int Ice = 1; Ice <= Cirno; Ice++) {
        if (Ice % 2 == 1) {
            fairy = 0;
            for (int Snow = 1; Snow <= Ice; Snow++) {
                printf("%d", Snow + fairy);
                fairy++;
            }
        } else {
            fairy = 1;
            for (int Snow = 1; Snow <= Ice; Snow++) {
                printf("%d", Snow + fairy);
                fairy++;
            }
        }

        printf("\n");
    }
}