#include <stdio.h>

int main() {
	int N, i, test, j;
	scanf("%d", &N);
	for (i=1; i<=N; i++) {
		test = i;
		j = 0;
		while (test--) {
			printf("%c",j + 64);
			j += 2;
		}
		test = i - 1;
		j -= 4;
		while (test--) {
			printf("%c", j + 64);
			j -= 2;
		}
		printf("\n");
	}
	return 0;
}