#include <stdio.h>

int main() {
	int i, j, test, n;
	int kyTu = 96;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		test = i;
		if (test % 2 != 0) {
			for (j = 1; j <= test; j++) {
				printf("%c ", kyTu + j);
			}
		} else {
			for (j = test; j >= 1; j--) {
				printf("%c ", kyTu + j);
			}
		}
		kyTu += test;
		printf("\n");
	}
	return 0;
}