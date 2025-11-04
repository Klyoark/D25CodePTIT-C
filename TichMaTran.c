#include <stdio.h>

int main(){
    int n,m,p;
    scanf("%d %d %d", &n, &m, &p);

    int Reimu[n][m], Marisa[m][p];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &Reimu[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            scanf("%d", &Marisa[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            int Exterminated = 0;
            for (int k = 0; k < m; k++){
                Exterminated += Reimu[i][k] * Marisa[k][j];
            }
            printf("%d", Exterminated);
            if (j < p - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }


}