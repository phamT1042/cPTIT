#include <stdio.h>

int main() {
	int a, b, startLine, i, j, k, endLine, count;
	scanf("%d %d", &a, &b);
	if (a > b) startLine = a;
	else startLine = b;
	for (i = 0; i < a; i++) {
		count = 0;
		endLine = 2;
		for (j = startLine; j >= 1; j--) {
			printf("%d", j);
			count++;
			if (count==b) break;
		}
		for (k = 0; k < b-count; k++){
			printf("%d", endLine);
			endLine++;
		}
		printf("\n");
		startLine--;
	}
	return 0;
}