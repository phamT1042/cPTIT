#include <stdio.h>

int number[100001];
int numberkhongGiam[100001];
int count[100001];
int main() {
	int N = 0, i, j, M = 0, swap;
	while (scanf("%d", &number[N]) != -1) N++;
	for(i = 0; i < N; i++) {
		if (checkKoGiam(number[i])) {
			j = checktrongMang(numberkhongGiam, number[i], M);
			if (j != -1) {
				count[j] += 1;
			} else {
				numberkhongGiam[M++] = number[i];
				count[M - 1] += 1;
			}
		}
	}
	for (i = 0; i < M - 1; i++) {
		for (j = i + 1; j < M; j++) {
			if (count[i] < count[j]) {
				swap = numberkhongGiam[j];
				numberkhongGiam[j] = numberkhongGiam[i];
				numberkhongGiam[i] = swap;
				swap = count[j];
				count[j] = count[i];
				count[i] = swap;
			}
		}
	}
	for (i = 0; i < M; i++) {
		printf("%d %d\n", numberkhongGiam[i], count[i]);
	}
	return 0;
}
int checkKoGiam(int x) {
	int sau = x % 10;
	x /= 10;
	while (x > 0) {
		if (x % 10 > sau) return 0;
		else {
			sau = x % 10;
			x /= 10;
		}
	}
	return 1;
}
int checktrongMang(int a[], int x, int M) {
	int i = 0;
	for (i; i < M; i++) {
		if (a[i] == x) return i;
	}
	return -1;
}