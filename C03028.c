#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	int a[n][n];
	for (i=0; i<n; i++) {
		for (j=0; j<=i; j++) {
			a[i][j] = tinhGiaiThua(i)/(tinhGiaiThua(j)*tinhGiaiThua(i-j));
		}
	}
	for (i=0; i<n; i++) {
		for (j=0; j<=i; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int tinhGiaiThua(int x) {
	if (x==1 || x==0) return 1;
	else return tinhGiaiThua(x-1)*x;
}