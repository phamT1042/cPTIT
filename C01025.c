#include <stdio.h>
#include <math.h>

//Huong lam: Xac dinh xmax, xmin va ymax, ymin
//de tim ra khoang cach lon nhat co the bao tron cac diem cua 2 hcn
//voi canh cua hinh vuong chinh la khoang cach lon nhat cua khoang cach (xmax va xmin) hoac (ymax va ymin)
int a[10];
void sapXepTangdan(int a[], int batDau, int ketThuc);
int main() {
	int i;
	for (i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
	}
	sapXepTangdan(a, 0, 7);
	sapXepTangdan(a, 1, 8);
	if (canhMax(a[0], a[6]) >= canhMax(a[1], a[7])) {
		printf("%d", canhMax(a[0], a[6]) * canhMax(a[0], a[6]));
	} else printf("%d", canhMax(a[1], a[7]) * canhMax(a[1], a[7]));
	return 0;
}
void sapXepTangdan(int a[], int batDau, int ketThuc) {
	int swap, i, j;
	for (i = batDau; i < ketThuc; i +=2) {
		for (j = i + 2; j < ketThuc; j += 2) {
			if (a[i] > a[j]) {
				swap = a[j];
				a[j] = a[i];
				a[i] = swap;
			}
		}
	}
}
int canhMax(int x, int y) {
	if ((x >= 0 && y >= 0) || (x <= 0 && y <= 0)) {
		return y - x;
	} else {
		if (y > 0) return y + abs(x);
		else return x + abs(y);
	}
}