#include <stdio.h>
#include <math.h>

int main() {
	int T, N, i, ketThuc, dau, cuoi;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		ketThuc = N/2;
		for (i = 2; i <= ketThuc; i++) {
			dau = i;
			cuoi = N - i;
			if (NguyenTo(dau)==1 && NguyenTo(cuoi)==1) printf("%d %d ", dau, cuoi);
		}
		printf("\n");
	}
	return 0;
}
int NguyenTo(int N) {
	if (N==2) return 1;
	int i;
	for(i = 2; i <= sqrt(N); i++) {
		if(N % i == 0) {
			return 0;
		}
	}
	return 1;
}