#include <stdio.h>

int main() {
	int h, startLine, endLine, i, j, k, draw;
	scanf("%d", &h);
	for (i = 1; i <= h; i++) {
		startLine = 1;
		for (draw = h-i; draw > 0; draw--) {
			printf("~");
		}
		for (j = 1; j <= i; j++) {
			printf("%d", startLine);
			startLine += 2;
		}
		for (k = startLine-4; k >= 1; k -= 2) {
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}