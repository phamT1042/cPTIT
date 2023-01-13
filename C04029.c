#include <stdio.h>

int A[101];
int main() {
	int swap, i, j, k, flag, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for (i = 0; i < N - 1; i++) {
		flag = 0;
		for (j = 0; j < N - i - 1; j++) {
			if (A[j] > A[j + 1]) {
				flag = 1;
				swap = A[j + 1];
				A[j + 1] = A[j];
				A[j] = swap;
			}
		}
		if (flag == 1) {
			printf("Buoc %d: ", i + 1);
			for (k = 0; k < N; k++) {
				printf("%d ", A[k]);
			}
			printf("\n");
		}
	}
	return 0;
}