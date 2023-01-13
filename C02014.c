#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[20][20];
int main() {
	int so, N, hangDau = 0, cotDau = 0, cotCuoi, hangCuoi, i, j;
	scanf("%d", &N);
	cotCuoi = 2 * N - 2;
	hangCuoi = 2 * N - 2;
	so = N;
	N = 2 * N - 1;
	while (so > 0) {
		for (i = hangDau; i <= hangCuoi; i++) {
			for (j = cotDau; j <= cotCuoi; j++) {
				if ((i == hangDau)||(i == hangCuoi)||(j == cotDau)||(j == cotCuoi)) {
					a[i][j] = so;
				}
			}
		}
		hangDau++;
		hangCuoi--;
		cotDau++;
		cotCuoi--;
		so--;
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}