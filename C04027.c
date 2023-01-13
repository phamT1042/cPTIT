#include <stdio.h>

int a[100];
int main() {
	int i, j, k, N, swap, vtMin;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i < N; i++) {
		printf("Buoc %d: ", i);
		vtMin = i;
		for (j = i + 1; j <= N; j++) {
			if (a[j] < a[vtMin]) {
				vtMin = j;
			}
		}
		swap = a[i];
		a[i] = a[vtMin];
		a[vtMin] = swap;
		for (k = 1; k <= N; k++) {
			printf("%d ", a[k]);
		}
		printf("\n");
	}
	return 0;
}