#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct num_count{
    int num;
    int count;
};

int checkKhongGiam(int num) {
    int cs;
    int x = 9;
    while (num > 0) {
        cs = num % 10;
        if (cs > x) {
            return 0;
        }
        x = cs;
        num /= 10;
    }
    return 1;
}

int cmp(const void* a, const void* b) {
    const struct num_count* numA = (const struct num_count*)a;
    const struct num_count* numB = (const struct num_count*)b;
    if (numA->count < numB->count) {
        return 1;
    } else if (numA->count > numB->count) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    struct num_count a[100001];
    int tmp, struct_idx = 0;
    while (scanf("%d", &tmp) != -1) {
        if (checkKhongGiam(tmp)) {
            int exist_in_struct = 0;
            for (int i = 0; i < struct_idx; i++) {
                if (a[i].num == tmp) {
                    exist_in_struct = 1;
                    a[i].count++;
                    break;
                }
            }
            if (!exist_in_struct) {
                a[struct_idx].num = tmp;
                a[struct_idx].count = 1;
                struct_idx++;
            }
        }
    }
    qsort(a, struct_idx, sizeof(struct num_count), cmp);

    for (int i = 0; i < struct_idx; i++) {
        printf("%d %d\n", a[i].num, a[i].count);
    }
}