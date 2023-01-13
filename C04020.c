#include <stdio.h>

int main() {
	int i, n, xoayTrai;
	scanf("%d", &n);
	int a[n];
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &xoayTrai);
	if (xoayTrai >= n) {
		xoayTrai %= n;
	}
	for (i=xoayTrai; i<n; i++) {
		printf("%d ", a[i]);
	}
	for (i=0; i<xoayTrai; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}