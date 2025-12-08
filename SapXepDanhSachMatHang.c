#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

struct Item{
    int id;
    char tenMatHang[205];
    char nhomHang[105];
    double giaMua;
    double giaBan;
    double loiNhuan;
};

int cmp(const void* a, const void* b) {
    const struct Item* ItemA = (const struct Item*)a;
    const struct Item* ItemB = (const struct Item*)b;

    if (ItemA->loiNhuan < ItemB->loiNhuan) {
        return 1;
    } else if (ItemA->loiNhuan > ItemB->loiNhuan) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d\n", &n);
    struct Item a[n];

    for (int i = 0; i < n; i++) {
        scanf("\n");
        a[i].id = i + 1;

        fgets(a[i].tenMatHang, 205, stdin);
        a[i].tenMatHang[strcspn(a[i].tenMatHang, "\n")] = '\0';

        fgets(a[i].nhomHang, 105, stdin);
        a[i].nhomHang[strcspn(a[i].nhomHang, "\n")] = '\0';

        scanf("%lf", &a[i].giaMua);
        scanf("%lf", &a[i].giaBan);

        a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
    }

    qsort(a, n, sizeof(struct Item), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.02lf\n", a[i].id, a[i].tenMatHang, a[i].nhomHang, a[i].loiNhuan);
    }
}