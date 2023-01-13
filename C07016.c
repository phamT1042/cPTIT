#include <stdio.h>
#include <string.h>

struct thiSinh {
	int ma;
	char ten[100], ngaySinh[20];
	float mon1, mon2, mon3, tongDiem;
};
void thongTinTS (int a, struct thiSinh ds[]);
void timDiemMaxvaIn(int a, struct thiSinh ds[]);
int main() {
	int T;
	scanf("%d", &T);
	getchar();
	struct thiSinh ds[T];
	thongTinTS(T, ds);
	sapXepdiemGiamdanvaIn(T, ds);
	return 0;
}
void thongTinTS (int a, struct thiSinh ds[]) {
	int i = 0;
	for (i; i < a; i++) {
		ds[i].ma = i + 1;
		gets(ds[i].ten);
		gets(ds[i].ngaySinh);
		scanf("%f%f%f", &ds[i].mon1, &ds[i].mon2, &ds[i].mon3);
		getchar();
		ds[i].tongDiem = ds[i].mon1 + ds[i].mon2 + ds[i].mon3;
	}
}
void sapXepdiemGiamdanvaIn(int a, struct thiSinh ds[]) {
	float swap;
	int j, i;
	for (i = 0; i < a - 1; i++) {
		for (j = i + 1; j < a; j++) {
			if (ds[j].tongDiem > ds[i].tongDiem) {
				swap = ds[j].ma;
				ds[j].ma = ds[i].ma;
				ds[i].ma = swap;
				swap = ds[j].tongDiem;
				ds[j].tongDiem = ds[i].tongDiem;
				ds[i].tongDiem = swap;
				daoXau(ds[i].ten, ds[j].ten);
				daoXau(ds[i].ngaySinh, ds[j].ngaySinh);
			}
		}
	}
	for (i = 0; i < a; i++) {
		printf("%d %s %s %.1f\n", ds[i].ma, ds[i].ten, ds[i].ngaySinh, ds[i].tongDiem);
	}
}
void daoXau (char s1[], char s2[]) {
	char swap[100];
	strcpy (swap, s2);
	strcpy (s2, s1);
	strcpy (s1, swap);
}