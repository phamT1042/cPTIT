#include <stdio.h>

int main() {
	int h, startLine, i, j;
	scanf("%d", &h);
	startLine = h + 63;
	for (i=h; i>=1; i--) {
		for (j=0; j<i; j++) {
			printf("%c", startLine + j);
		}
		printf("\n");
		startLine--;
	}

	return 0;
}