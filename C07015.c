#include <stdio.h>
#include <string.h>

struct thiSinh {
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
	timDiemMaxvaIn(T, ds);
	return 0;
}
void thongTinTS (int a, struct thiSinh ds[]) {
	int i = 0;
	for (i; i < a; i++) {
		gets(ds[i].ten);
		gets(ds[i].ngaySinh);
		scanf("%f%f%f", &ds[i].mon1, &ds[i].mon2, &ds[i].mon3);
		getchar();
		ds[i].tongDiem = ds[i].mon1 + ds[i].mon2 + ds[i].mon3;
	}
}
void timDiemMaxvaIn(int a, struct thiSinh ds[]) {
	float max = 0;
	int i;
	for (i = 0; i < a; i++) {
		if (ds[i].tongDiem > max) max = ds[i].tongDiem;
	}
	for (i = 0; i < a; i++) {
		if (ds[i].tongDiem == max) printf("%d %s %s %.1f\n", i + 1, ds[i].ten, ds[i].ngaySinh, ds[i].tongDiem);
	}
}
