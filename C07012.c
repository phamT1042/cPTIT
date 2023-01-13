#include <stdio.h>
#include <string.h>

struct matHang {
	int ma;
	float giaMua, giaBan;
	float loiNhuan;
	char tenHang[10000];
	char nhomHang[10000];
};

void nhapThongTinHangHoa(int T, struct matHang a[]);
void SXgiatriloiNhuan(int T, struct matHang a[]);
void inDSsauSX (int T, struct matHang a[]);
void swapXau (char s1[], char s2[]);
int main() {
	int T, i = 0;
	scanf("%d", &T);
	getchar();
	struct matHang hangHoa[T];
	nhapThongTinHangHoa(T, hangHoa);
	SXgiatriloiNhuan(T, hangHoa);
	inDSsauSX(T, hangHoa);
	return 0;
}
void nhapThongTinHangHoa(int T, struct matHang a[]) {
	int i = 0;
	while (T--) {
		a[i].ma = i + 1;
		gets(a[i].tenHang);
		gets(a[i].nhomHang);
		scanf("%f%f", &a[i].giaMua, &a[i].giaBan);
		getchar();
		a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
		i++;
	}
}
void SXgiatriloiNhuan(int T, struct matHang a[]) {
	int i, j;
	float swapLoiNhuan;
	int swapMa;
	for (i = 0; i < T - 1; i++) {
		for (j = i + 1; j < T; j++) {
			if (a[j].loiNhuan > a[i].loiNhuan) {
				swapLoiNhuan = a[j].loiNhuan;
				a[j].loiNhuan = a[i].loiNhuan;
				a[i].loiNhuan = swapLoiNhuan;
				swapMa = a[j].ma;
				a[j].ma = a[i].ma;
				a[i].ma = swapMa;
				swapXau (a[i].tenHang, a[j].tenHang);
				swapXau (a[i].nhomHang, a[j].nhomHang);
			}
		}
	}
}
void inDSsauSX (int T, struct matHang a[]) {
	int i;
	for (i = 0; i < T; i++) {
		printf("%d %s %s %.2f\n", a[i].ma, a[i].tenHang, a[i].nhomHang, a[i].loiNhuan);
	}
}
void swapXau (char s1[], char s2[]) {
	char swap[10000];
	strcpy(swap, s2);
	strcpy(s2, s1);
	strcpy(s1, swap);
}
