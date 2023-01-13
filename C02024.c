#include <stdio.h>

int main() {
	int a, b, i, j, k, count, startLine;
	scanf("%d %d", &a, &b);
	startLine = 1;
	for (i = 1; i <= a; i++) {
		count = 0;
		j = startLine;
		if (j <= b) {
			for (j; j <= b; j++) {
				printf("%c", j + 64);
				count++;
				if (count == b) break;
			}
			for (k = 0; k < b - count; k++) {
				printf("%c", i+63-k);
			}
		} else {
			printf("%c", b+64);
			count = 1;
			for (k = b + 63; k >= 65; k--) {
				printf("%c", k);
			}
		}
		printf("\n");
		startLine++;
	}
	return 0;
}