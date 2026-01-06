#include <stdio.h>
#include <math.h>

static int f[1000005] = {0};
static int x[1000005] = {0};
int idx = 0;

void sieve() {
    f[0] = f[1] = 1;
    for (int i = 2; i * i <= 1000000; i++) {
        if (!f[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                f[j] = 1;
            }
        }
    }
    for (int i = 2; i <= 1000000; i++) {
        if (!f[i]) {
            x[idx++] = i;
        }
    }
}

int main() {
    sieve();
    int t;
    scanf("%d", &t);
    while (t--) {
        long long l, r;
        scanf("%lld %lld", &l, &r);

        int count = 0;
        long long sl = (long long)ceil(sqrt(l));
        long long sr = (long long)floor(sqrt(r));
        for (int i = sl; i <= sr; i++) {
            if (!f[i]) {
                count++;
            }
        }
        printf("%d\n", count);
    }
}