#include <stdio.h>

int main() {
	int h, i, j, lienTuc = 1;
	scanf("%d", &h);
	for (i = 1; i <= h; i++) {
		if (i % 2 != 0) {
			for (j = 1; j <= i; j++) {
				printf("%d ", lienTuc++);
			}
			lienTuc--;
		} else {
			lienTuc += i;
			for (j = 1; j <= i; j++) {
				printf("%d ", lienTuc + 1 - j);
			}
			lienTuc++;
		}
		printf("\n");
	}
	return 0;
}