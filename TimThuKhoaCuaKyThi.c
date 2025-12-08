#include <stdio.h>
#include <string.h>

struct sv {
    int id;
    char ten[105];
    char birth[15];
    double p1, p2, p3;
    double total;
};

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
        scanf("%lf %lf %lf", &a[i].p1, &a[i].p2, &a[i].p3);
        a[i].total = a[i].p1 + a[i].p2 + a[i].p3;

        if (a[i].total > max) {
            max = a[i].total;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i].total == max) {
            printf("%d %s %s %.01lf\n", a[i].id, a[i].ten, a[i].birth, a[i].total);
        }
    }


}