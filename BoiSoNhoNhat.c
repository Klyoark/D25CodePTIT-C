#include <stdio.h>

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

unsigned long long lcm(unsigned long long a, unsigned long long b) {
    return a * b / gcd(a, b);
}

int main() { 
    int t;
    scanf("%d", &t);
    while (t--) {
        int tr, ph;
        unsigned long long s = 1;
        scanf("%d %d", &tr, &ph);
        for (unsigned long long i = tr; i <= ph; i++) {
            s = lcm(s, i);
        }
        printf("%lld\n", s);
    }
}