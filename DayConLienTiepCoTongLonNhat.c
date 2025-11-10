
#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, phantu;
        long long sum = 0, cur_max = -100000000;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &phantu);
            sum += phantu;
            if (cur_max < sum) {
                cur_max = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        printf("%lld\n", cur_max);
    }
}