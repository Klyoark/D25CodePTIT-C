#include <stdio.h>
#include <string.h>

int beautifulsea(char bien[]) {
    if (bien[7] > bien[6] && bien [8] > bien[7] && bien[10] > bien[8] && bien[11] > bien[10]) {
        return 1;
    } else if (bien[6] == bien[7] && bien[7] ==  bien[8] && bien[10] == bien[11]) {
        return 1;
    } else if (bien[6] == bien[7] && bien[7] ==  bien[8] && bien[8] == bien[10] && bien[10] == bien[11]) {
        return 1;
    }

    for (int i = 6; i < 12; i++) {
        if (i != 9){
            if (bien[i] != '6' && bien[i] != '8') {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char bien[16];
        fgets(bien, sizeof(bien), stdin);
        bien[strcspn(bien, "\n")] = '\0';
        printf(beautifulsea(bien) ? "YES\n" : "NO\n");
    }
}