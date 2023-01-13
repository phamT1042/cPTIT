#include <stdio.h>

int main() {
	int a, b, i, j, k;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) {
		for (j = 0; j < i; j++) {
			printf("~");
		}
		for (k = 0; k < b; k++) {
			if (k==0 || k == b-1 || i==0 || i == a-1) {
				printf("*");
			} else printf(".");
		}
		printf("\n");
	}
	return 0;
}