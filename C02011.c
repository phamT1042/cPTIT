#include <stdio.h>

int main() {
	int a, b, i, j, k, endLine, count;
	scanf("%d %d", &a, &b);
	for (i = 1; i <= a; i++) {
		count = 0;
		j = i;
		if (j <= b) {
			endLine = b - 1;
			for (j; j <= b; j++) {
				printf("%d", j);
				count++;
			}
			for (k = 0; k < b-count; k++) {
				printf("%d", endLine);
				endLine--;
			}
		} else {
			printf("%d", i);
			endLine = i-1;
			for (k = 0; k < b-1; k++) {
				printf("%d", endLine);
				endLine--;
			}
		}
		printf("\n");
	}
	return 0;
}