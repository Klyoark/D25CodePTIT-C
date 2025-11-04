#include <stdio.h>

int main(){
    int Cirno;
    scanf("%d", &Cirno);

    for (int Ice = 1; Ice <= Cirno; Ice++) {
        for (int Snow = 1; Snow <= Ice * 2 - 1; Snow++) {
            printf("%d", Snow);
        }
        printf("\n");
    }
}