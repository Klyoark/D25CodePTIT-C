#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien{
    int msv;
    char tsv[100];
    double p1, p2, p3;
    double total;
};

int cmp(const void* a, const void* b) {
    const struct SinhVien* A = (const struct SinhVien*)a;
    const struct SinhVien* B = (const struct SinhVien*)b;
    return ((A->total > B->total) - (A->total < B->total));
}

static struct SinhVien a[1000];
static int id = 1;
static int totalSV = 0;

void addNew(int num) {
    for (int i = 0; i < num; i++) {
        a[totalSV].msv = id;
        id++;

        getchar();

        fgets(a[totalSV].tsv, 100, stdin);
        a[totalSV].tsv[strcspn(a[totalSV].tsv, "\n")] = '\0';

        scanf("%lf %lf %lf", &a[totalSV].p1, &a[totalSV].p2, &a[totalSV].p3);

        totalSV++;
    }
}

void changeInfo(int id) {
    for (int i = 0; i < totalSV; i++) {
        if (a[i].msv == id) {
            getchar();
            fgets(a[i].tsv, 100, stdin);
            a[i].tsv[strcspn(a[i].tsv, "\n")] = '\0';
            scanf("%lf %lf %lf", &a[i].p1, &a[i].p2, &a[i].p3);
            return;
        }
    }
}

void sumPoint(struct SinhVien* sv) {
    sv->total = sv->p1 + sv->p2 + sv->p3;
}

void export() {
    for (int i = 0; i < totalSV; i++) {
        sumPoint(&a[i]);
    }
    
    qsort(a, totalSV, sizeof(struct SinhVien), cmp);

    for (int i = 0; i < totalSV; i++) {
        printf("%d %s %.1lf %.1lf %.1lf\n", a[i].msv, a[i].tsv, a[i].p1, a[i].p2, a[i].p3);
    }
}

int main() {

    while (sizeof("Nguyen Duong Phuc Khanh B25DCCN246")) {
        int choice;
        scanf("%d", &choice);
        if (choice == 1) {
            int num;
            scanf("%d", &num);
            addNew(num);
            printf("%d\n", num);
        } else if (choice == 2) {
            int id;
            scanf("%d", &id);
            changeInfo(id);
            printf("%d\n", id);
        } else if (choice == 3) {
            export();
            return 0;
        }
    }
}

