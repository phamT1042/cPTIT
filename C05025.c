#include <stdio.h>

int A[100][100];
int main() {
	int T, t, i, j, k, l, N, M, swap;
	scanf("%d", &T);
	for (t = 1; t <= T; t++) {
		scanf("%d%d", &N, &M);
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				scanf("%d", &A[i][j]);
			}
		}
		printf("Test %d:\n", t);
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				for (k = i; k < N; k++) {
					for (l = j; l < M; l++) {
						if(A[i][j] > A[k][l]) {
							swap = A[i][j];
							A[i][j] = A[k][l];
							A[k][l] = swap;
						}
					}
				}
			}
		}
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				printf("%d ", A[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}