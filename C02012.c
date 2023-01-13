#include <stdio.h>

int main() {
	int a, b, startLine, i, j, k, count;
	scanf("%d %d", &a, &b);
	for (i = 1; i <= a; i++) {
		count = 0;
		if (i > 1) {
			for (j = i; j >= 2; j--) {
				printf("%d", j);
				count++;
				if (count == b) break;
			}
		}
		startLine = 1;
		for (k = 0; k < b-count; k++) {
			printf("%d", startLine);
			startLine++;
		}
		printf("\n");
	}
	return 0;
}