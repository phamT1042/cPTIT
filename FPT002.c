#include <stdio.h>

int main() {
	int m, n, p, q, i, j, k;
	scanf("%d %d %d	%d", &m, &n, &p, &q);
	long long a[m][n], b[n][p], c[p][q], e[m][p], d[m][q];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%lld", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			scanf("%lld", &b[i][j]);
		}
	}
	for (i = 0; i < p; i++) {
		for (j = 0; j < q; j++) {
			scanf("%lld", &c[i][j]);
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			e[i][j] = 0;
			for (k = 0; k < n; k++) {
				e[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < q; j++) {
			d[i][j] = 0;
			for (k = 0; k < p; k++) {
				d[i][j] += e[i][k] * c[k][j];
			}
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < q; j++) {
			printf("%lld ", d[i][j]);
		}
		printf("\n");
	}
	return 0;
}