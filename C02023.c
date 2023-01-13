#include <stdio.h>

int main() {
	int a, b, i, j, k, count, x;
	scanf("%d %d", &a, &b);
	if (a > b) x = a + 96;
	else x = b + 96;
	for (i = 0; i < a; i++) {
		count = 0;
		for (j = 0; j < i; j++){
			printf("%c", x-j);
			count++;
			if (count == b) break;
		}
		for (k = 0; k < b-count; k++){
			printf("%c", x-j);
		}
		printf("\n");
	}
    return 0;
}