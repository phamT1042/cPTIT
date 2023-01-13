#include <stdio.h>

int main() {
	int i, n, j, xoayPhai;
	scanf("%d", &n);
	int a[n];
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &xoayPhai);
	if (xoayPhai >= n) {
		xoayPhai %= n;
	}
	j = n - xoayPhai;
	for (i= j; i<n; i++) {
		printf("%d ", a[i]);
	}
	for (i=0; i < j; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}