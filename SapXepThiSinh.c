#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sv {
    int id;
    char ten[105];
    char birth[15];
    double d1, d2, d3;
    double total;
};

int cmp (const void* a, const void* b) {
    const struct sv* sv_A = (const struct sv*)a;
    const struct sv* sv_B = (const struct sv*)b;

    if (sv_A->total < sv_B->total) {
        return 1;
    } else if (sv_A->total > sv_B->total) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d\n", &n);
    struct sv a[n];
    double max = 0;

    for (int i = 0; i < n; i++) {
        scanf("\n");
        a[i].id = i + 1;
        fgets(a[i].ten, 105, stdin);
        fgets(a[i].birth, 15, stdin);
        a[i].ten[strcspn(a[i].ten, "\n")] = '\0';
        a[i].birth[strcspn(a[i].birth, "\n")] = '\0';
        scanf("%lf %lf %lf", &a[i].d1, &a[i].d2, &a[i].d3);
        a[i].total = a[i].d1 + a[i].d2 + a[i].d3;

        if (a[i].total > max) {
            max = a[i].total;
        }
    }
    qsort(a, n, sizeof(struct sv), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.01lf\n", a[i].id, a[i].ten, a[i].birth, a[i].total);
    }
}