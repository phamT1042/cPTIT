#include <stdio.h>

void sapXepgiamDan(int a[], int left, int right) {
	int i, j, x;
	x = a[(left + right) / 2];
	i = left;
	j = right;
	do {
		while (a[i] > x) {
			i++;
		}
		while (a[j] < x) {
			j--;
		}
		if (i <= j) {
			int trunggian = a[i];
			a[i] = a[j];
			a[j] = trunggian;
			i++;
			j--;
		}
	} while (i < j);
	if (left < j) {
		sapXepgiamDan(a, left, j);
	}
	if (i < right) {
		sapXepgiamDan(a, i, right);
	}
}
int main() {
	int T, i, j, N, hieuMin, hieu, count, swap;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		int A[N];
		for (i = 0; i < N; i++) {
			scanf("%d", &A[i]);
		}
		hieuMin = 1000000000;
		sapXepgiamDan(A, 0, N - 1);
		for (i = 0; i < N - 1; i++) {
			hieu = A[i] - A[i+1];
			if (hieu < hieuMin) hieuMin = hieu;
		}
		count = 0;
		for (i = 0; i < N - 1; i++) {
			hieu = A[i] - A[i+1];
			if (hieu == hieuMin) count++;
		}
		printf("%d %d\n", hieuMin, count);
	}
	return 0;
}
