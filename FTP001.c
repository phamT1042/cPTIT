#include <stdio.h>

int main() {
	int n, i, j, k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("0 ");
		}
		for (k = 1; k <= n-j+1; k++) {
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}