#include <stdio.h>

int main() {
	int a, b, i, j, k;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) {
		for (j = 0; j < i; j++) {
			printf("~");
		}
		for (k = 0; k < b; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}