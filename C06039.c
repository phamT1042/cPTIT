#include <stdio.h>
#include <string.h>
#include <math.h>

char cacXauGT[50][50];
int viTri[50];
char cacXauxoay[50][50];
void taoMangxoayxauDautien(int M);
int main() {
	int N, i, j;
	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++) {
		gets(cacXauGT[i]);
	}
	int soXauxoayduoc = strlen(cacXauGT[0]);
	taoMangxoayxauDautien(soXauxoayduoc);
	int x = viTricacXauGTtrongMangxoayXaudauTien(N, soXauxoayduoc);
	if (x == -1) printf("-1");
	else {
		int sumMin = 5000;
		for (i = 0; i < x; i++) {
			int sum = 0;
			for (j = 0; j < i; j++) {
				if (viTri[j] <= viTri[i]) sum += viTri[i] - viTri[j];
				else {
					sum += soXauxoayduoc - (viTri[j] - viTri[i]);
				}
			}
			for (j = i + 1; j < x; j++) {
				if (viTri[j] <= viTri[i]) sum += viTri[i] - viTri[j];
				else {
					sum += soXauxoayduoc - (viTri[j] - viTri[i]);
				}
			}
			if (sum < sumMin) sumMin = sum;
		}
		printf("%d", sumMin);
	}
	return 0;
}
void taoMangxoayxauDautien(int M) {
	int i, j;
	char test[50];
	char first;
	strcpy(test, cacXauGT[0]);
	strcpy(cacXauxoay[0], test);
	for (i = 1; i < M; i++) {
		first = test[0];
		for (j = 0; j < M - 1; j++) {
			test[j] = test[j + 1];
		}
		test[M - 1] = first;
		strcpy(cacXauxoay[i], test);
	}
}
int viTricacXauGTtrongMangxoayXaudauTien(int N, int M) {
	int i, j, k = 0, tonTai;
	viTri[k++] = 0;
	for (i = 1; i < N; i++) {
		tonTai = 0;
		for (j = 0; j < M; j++) {
			if (strcmp(cacXauGT[i], cacXauxoay[j]) == 0) {
				tonTai = 1;
				break;
			}
		}
		if (tonTai == 0) return -1;
		else {
			viTri[k++] = j;
		}
	}
	return k;
}
