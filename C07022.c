#include <stdio.h>
#include <string.h>

struct sinhVien {
	int ma;
	char ten[100];
	float diemA, diemB, diemC, tongDiem;
};
struct sinhVien ds[10000];
void swapxauKT(char x[], char y[]);
void swapso(float *a, float *b);
int main() {
	int i, j, select = 0, N, fix, people = 0, start, swap;
	do {
		scanf("%d", &select);
		switch (select) {
			case 1:
				scanf("%d", &N);
				getchar();
				if (people == 0) {
					start = 0;
					people = N;
				} else {
					start = people;
					people += N;
				}
				for (i = start; i < people; i++) {
					ds[i].ma = i + 1;
					gets(ds[i].ten);
					scanf("%f%f%f", &ds[i].diemA, &ds[i].diemB, &ds[i].diemC);
					getchar();
					ds[i].tongDiem = ds[i].diemA + ds[i].diemB + ds[i].diemC;
				}
				printf("%d\n", N);
				break;
			case 2:
				scanf("%d", &fix);
				getchar();
				gets(ds[fix - 1].ten);
				scanf("%f%f%f", &ds[fix - 1].diemA, &ds[fix - 1].diemB, &ds[fix - 1].diemC);
				getchar();
				ds[fix - 1].tongDiem = ds[fix - 1].diemA + ds[fix - 1].diemB + ds[fix - 1].diemC;
				printf("%d\n", fix);
				break;
			case 3:
				for (i = 0; i < people; i++) {
					if (ds[i].diemA < ds[i].diemB && ds[i].diemB < ds[i].diemC)
						printf("%d %s %.1f %.1f %.1f\n", ds[i].ma, ds[i].ten, ds[i].diemA, ds[i].diemB, ds[i].diemC);
				}
		}
	} while (select != 3);
	return 0;
}