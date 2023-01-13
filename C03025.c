#include <stdio.h>
#include <math.h>

int main() {
	int T, a, b, i, count;
	scanf("%d", &T);
	while (T--) {
		count = 0;
		scanf("%d%d", &a, &b);
		for (i=a; i<=b; i++) {
			if (tongchuSoNT(i)==1 && nguyenTo(i)==1) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
int tongchuSoNT(int N) {
	int sum = 0, cuoi;
	while (N>0) {
		cuoi = N % 10;
		if (nguyenTo(cuoi)==0) return 0;
		sum += cuoi;
		N /= 10;
	}
	if (nguyenTo(sum)==1) return 1;
	else return 0;
}
int nguyenTo(int N) {
	int i;
	if (N<2) return 0;
	else {
		for (i=2; i<=sqrt(N); i++) {
			if (N % i == 0) return 0;
		}
	}
	return 1;
}
