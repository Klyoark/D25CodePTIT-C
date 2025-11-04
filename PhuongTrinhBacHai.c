#include <stdio.h>
#include <math.h>
int main(){
//pt bac 2
// delta = b^2 - 4ac




    double a, b, c;
    scanf ("%lf %lf %lf", &a, &b, &c);

    if (a == 0){
        if (b == 0){
            printf("NO");
        } else {
            printf("%.02lf", -c / b);
        }
    } else {
        double delta = (b * b) - (4 * a * c);
        if (delta == 0) {
            printf("%.02lf", -b / (2 * a));
        } else if (delta > 0) {
            printf("%.02lf %.02lf", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
        } else {
            printf("NO");
        }

    }



}