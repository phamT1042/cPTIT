#include <stdio.h>

int main() {
	int a, b, i, j, k, startLine, count, flag;
	scanf("%d %d", &a, &b);
	if (a>b) startLine = b+64;
	else startLine = a+64;
	for (i = 1; i <= a; i++) {
		flag = 0;
		count = 0;
		for (j = 0; j < b-(a-i); j++) {
			printf("%c", startLine+j);
			count++;
		}
		for (k = 0; k < b-count; k++) {
			if (a > b && i < a-b+1) {
				printf("%c", startLine+j);
				flag = 1;
			} else
				printf("%c", startLine+j-1);
		}
		printf("\n");
		if (flag == 0) startLine--;
	}
	return 0;
}