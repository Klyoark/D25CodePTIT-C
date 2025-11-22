#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double yum = 0;
    double x;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &x);
        yum += x;
    }

    printf("%.03lf", yum / n);
}