#include <stdio.h>
#include <stdlib.h>


int cmp(const void *x, const void *y) {
    int Reimu = *(int*)x;
    int Marisa = *(int*)y;

    int v1 = (Reimu % 2 + 2) % 2;
    int v2 = (Marisa % 2 + 2) % 2;

    if (v1 != v2) {
        return v1 - v2;
    }
    return Reimu - Marisa;
}

int main() {
    int Friends;
    scanf("%d", &Friends);
    int Cirno[Friends];

    for (int Ice = 0; Ice < Friends; Ice++) {
        scanf("%d", &Cirno[Ice]);
    }

    qsort(Cirno, Friends, sizeof(int), cmp);

    for (int Ice = 0; Ice < Friends; Ice++) {
        printf("%d ", Cirno[Ice]);
    }
    
}