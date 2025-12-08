#include <stdio.h>

struct PhanSo{
    int tu;
    int mau;
};

int ucln(int a, int b) {
    if (b == 0) {
        return a;
    }
    return ucln(b, a % b);
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

void RutGon(struct PhanSo* PS) {
    int u = ucln(PS->tu, PS->mau);
    PS->tu /= u;
    PS->mau /= u;
}

void QuyDong(struct PhanSo* P, struct PhanSo* Q) {
    int BC = bcnn(P->mau, Q->mau);
    P->tu *= (BC / P->mau);
    Q->tu *= (BC / Q->mau);
    P->mau = Q->mau = BC;
}

void TinhTong(struct PhanSo* P, struct PhanSo* Q, struct PhanSo* Tong) {
    Tong->tu = P->tu + Q->tu;
    Tong->mau = P->mau;
}

void TinhThuong(struct PhanSo* P, struct PhanSo* Q, struct PhanSo* Thuong) {
    Thuong->tu = P->tu * Q->mau;
    Thuong->mau = P->mau * Q->tu;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++) {
        struct PhanSo P;
        struct PhanSo Q;
        scanf("%d %d %d %d", &P.tu, &P.mau, &Q.tu, &Q.mau);
        printf("Case #%d:\n", k);

        RutGon(&P);
        RutGon(&Q);

        QuyDong(&P, &Q);
        printf("%d/%d %d/%d\n", P.tu, P.mau, Q.tu, Q.mau);

        struct PhanSo Tong;
        TinhTong(&P, &Q, &Tong);
        RutGon(&Tong);
        printf("%d/%d\n", Tong.tu, Tong.mau);

        struct PhanSo Thuong;
        TinhThuong(&P, &Q, &Thuong);
        RutGon(&Thuong);
        printf("%d/%d\n", Thuong.tu, Thuong.mau);

    }
}