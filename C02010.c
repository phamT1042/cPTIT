#include <stdio.h>

int main() {
	int soHang, soCot, i, j, k;
	scanf("%d%d", &soHang, &soCot);
	for (i = 1; i <= soHang; i++) {
		j = i;
		if (j <= soCot) {
			for (j; j <= soCot; j++) {
				printf("%d", j);
			}
			for (k = i - 1; k >= 1; k--) {
				printf("%d", k);
			}
		} else {
			printf("%d", i);
			for (k = soCot - 1; k >= 1; k--) {
				printf("%d", k);
			}
		}
		printf("\n");
	}
	return 0;
}