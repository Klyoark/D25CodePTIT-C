#include <stdio.h>
#include <math.h>

int legit (double ac, double ab, double bc) {
    if (ac <= 0 || ab <= 0 || bc <= 0) {
        return 0;
    }
    if (ac + ab <= bc || ac + bc <= ab || ab + bc <= ac) {
        return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        double ax, ay, bx, by, cx, cy;
        scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);

        double ac = sqrt((ay - cy) * (ay - cy) + (ax - cx) * (ax - cx));
        double ab = sqrt((ay - by) * (ay - by) + (ax - bx) * (ax - bx));
        double bc = sqrt((by - cy) * (by - cy) + (bx - cx) * (bx - cx));

        if (legit(ac, ab, bc)) {
            printf("%.3lf\n", ac + ab + bc);
        } else {
            printf("INVALID\n");
        }
    }
}