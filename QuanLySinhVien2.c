#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct SinhVien{
    int msv;
    char tsv[100];
    double p1, p2, p3;
    double total;
};

struct SinhVien a[1000];
int total = 0;
int id = 1;

int check(const struct SinhVien* sv) {
    return (sv->p1 < sv->p2 && sv->p2 < sv->p3) ? 1 : 0;
}

void addNew(int num) {
    for (int i = 0; i < num; i++) {
        a[total].msv = id;
        id++;
        getchar();
        fgets(a[total].tsv, 100, stdin);
        a[total].tsv[strcspn(a[total].tsv, "\n")] = '\0';
        scanf("%lf %lf %lf", &a[total].p1, &a[total].p2, &a[total].p3);
        total++;
    }
}

void changeInfo(int id) {
    for (int i = 0; i < total; i++) {
        if (a[i].msv == id) {
            getchar();
            fgets(a[i].tsv, 100, stdin);
            a[i].tsv[strcspn(a[i].tsv, "\n")] = '\0';
            scanf("%lf %lf %lf", &a[i].p1, &a[i].p2, &a[i].p3);
            return;
        }
    }
}

void export() {
    for (int i = 0; i < total; i++) {
        if (check(&a[i])) {
            printf("%d %s %.1lf %.1lf %.1lf\n", a[i].msv, a[i].tsv, a[i].p1, a[i].p2, a[i].p3);
        }
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