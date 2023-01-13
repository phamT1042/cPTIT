#include <stdio.h>

int main() {
	int h, i, j, bonus, bien;
	scanf("%d", &h);
	for (i = 1; i <= h; i++) {
		bonus = h - 1;
		j = i;
		printf("%d ", j);
		bien = j;
		while (j > 1) {
			bien += bonus;
			printf("%d ", bien);
			bonus--;
			j--;
		}
		printf("\n");
	}
	return 0;
}