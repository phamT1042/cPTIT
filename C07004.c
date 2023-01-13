#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct PhanSo {
	int tu;
	int mau;
};
void rutGon(struct PhanSo *ps);
void quyDong(struct PhanSo *ps1,  struct PhanSo *ps2);
void congPS(struct PhanSo *ps1,  struct PhanSo *ps2);
void chiaPS (struct PhanSo *ps1,  struct PhanSo *ps2);
int main() {
	int T, test;
	scanf("%d", &T);
	for (test = 1; test <= T; test++) {
		struct PhanSo ps1, ps2;
		scanf("%d%d%d%d", &ps1.tu, &ps1.mau, &ps2.tu, &ps2.mau);
		rutGon(&ps1);
		rutGon(&ps2);
		printf("Case #%d:\n", test);
		quyDong(&ps1, &ps2);
		congPS(&ps1, &ps2);
		chiaPS(&ps1, &ps2);
	}
	return 0;
}
int UCLN (int a, int b) {
	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
void rutGon(struct PhanSo *ps) {
	int chung = UCLN(ps->tu, ps->mau);
	ps->tu /= chung;
	ps->mau /= chung;
}
void quyDong(struct PhanSo *ps1,  struct PhanSo *ps2) {
	int BCNN = (ps1->mau * ps2->mau) / UCLN(ps1->mau, ps2->mau);
	ps1->tu = ps1->tu * (BCNN / ps1->mau);
	ps2->tu = ps2->tu * (BCNN / ps2->mau);
	ps1->mau = ps2->mau = BCNN;
	printf("%d/%d %d/%d\n", ps1->tu, ps1->mau, ps2->tu, ps2->mau);
}
void congPS(struct PhanSo *ps1,  struct PhanSo *ps2) {
	struct PhanSo ketQua;
	ketQua.tu = ps1->tu + ps2->tu;
	ketQua.mau = ps1->mau;
	rutGon(&ketQua);
	printf("%d/%d\n", ketQua.tu, ketQua.mau);
}
void chiaPS (struct PhanSo *ps1,  struct PhanSo *ps2) {
	struct PhanSo ketQua;
	ketQua.tu = ps1->tu * ps2->mau;
	ketQua.mau = ps1->mau * ps2->tu;
	rutGon(&ketQua);
	printf("%d/%d\n", ketQua.tu, ketQua.mau);
}

