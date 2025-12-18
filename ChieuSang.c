#include <stdio.h>

int main() {
    int street_len, base_light, lit_range;
    scanf("%d", &street_len);
    scanf("%d", &base_light);
    scanf("%d", &lit_range);

    int pos[base_light];
    for (int i = 0; i < base_light; i++) {
        scanf("%d", &pos[i]);
    }

    int street[105] = {0};
    int Lbound = 0;
    int Rbound = 0;

    //cur lit
    for (int i = 0; i < base_light; i++) {
        Lbound = pos[i] - lit_range;
        Rbound = pos[i] + lit_range;

        if (Lbound < 1) {
            Lbound = 1;
        } 
        if (Rbound > street_len) {
            Rbound = street_len;
        }

        for (int j = Lbound; j < Rbound; j++) {
            street[j] = 1;
        }
    }

    int placed_light = 0;

    for (int i = 0; i < street_len;) {
        if (street[i] == 1) {
            i++;
        } else {
            i += lit_range + 1 + lit_range;
            placed_light++;
        }
    }

    printf("%d", placed_light);
}