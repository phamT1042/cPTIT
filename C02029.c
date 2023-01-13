#include <stdio.h>

int main() {
	int i, j, start, bonus, k, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		start = i + 64;
		k = i;
		bonus = n - 1;
		j = start;
		while (k--) {
			printf("%c ", j);
			j += bonus;
			bonus--;
		}
		printf("\n");
	}
	return 0;
}