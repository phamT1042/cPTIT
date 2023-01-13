#include <stdio.h>

int main() {
	int i, j, T, N, M, hangMax, cotMax, tongMax, sum, test = 1;
	scanf("%d", &T);
	for (test; test <= T; test++) {
		scanf("%d%d", &N, &M);
		int a[N][M];
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", test);
		tongMax = 0;
		for (i = 0; i < N; i++) {
			sum = 0;
			j = 0;
			while (j < M) {
				sum += a[i][j];
				j++;
			}
			if (sum > tongMax) {
				tongMax = sum;
				hangMax = i;
			}
		}
		for (i = hangMax; i < N-1; i++) {
			for (j = 0; j < M; j++) {
				a[i][j] = a[i+1][j];
			}
		}
		N -= 1;
		tongMax = 0;
		for (i = 0; i < M; i++) {
			sum = 0;
			j = 0;
			while (j < N) {
				sum += a[j][i];
				j++;
			}
			if (sum > tongMax) {
				tongMax = sum;
				cotMax = i;
			}
		}
		for (i=0; i < N; i++) {
			for (j = cotMax; j < M-1; j++) {
				a[i][j] = a[i][j+1];
			}
		}
		M -= 1;
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
