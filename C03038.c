#include <stdio.h>

int main() {
	int N, P, T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &N, &P);
		printf("%d\n", khongDungCT(N, P));
	}
	return 0;
}
int khongDungCT(int N, int P) {
	int i, test, x = 0;
	for (i = P; i <= N; i += P) {
		test = i;
		while (test % P == 0) {
			x++;
			test /= P;
		}
	}
	return x;
}
int CTLegendre(int N, int P) {
	int p = P, x = 0;
	while (N/P != 0) {
		x += N/P;
		P *= p;
	}
	return x;
}