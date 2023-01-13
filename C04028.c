#include <stdio.h>

int a[100];
int main() {
	int i, j, N, pos, x;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N; i++) {
		printf("Buoc %d: ", i);
		x = a[i];
		pos = i - 1;
		while (pos >= 0 && a[pos] > x) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		for (j = 0; j <= i; j++) {
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}