#include <stdio.h>

int main() {
	int M, i, j;
	scanf("%d", &M);
	long long a[M][M], chuyenDoi;
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			scanf("%lld", &a[i][j]);
		}
	}
	for (i = 0; i < M; i++) {
		chuyenDoi = a[i][M-1-i];
		a[i][M-1-i] = a[i][i];
		a[i][i] = chuyenDoi;
	}
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}