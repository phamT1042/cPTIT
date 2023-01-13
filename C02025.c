#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, i, j, k, count, startLine = 1;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) {
		count = 0;
		for (j = startLine; j < b; j++) {
			printf("%c", j + 63);
			count++;
		}
		for (k = 0; k < b-count; k++) {
			printf("%c", b + 63);
		}
		startLine++;
		printf("\n");
	}
	return 0;
}