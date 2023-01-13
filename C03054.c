#include <stdio.h>
#include <math.h>

void catDoi(long long N) {
	long long n, test = N, M = 0;
	int dau, soChuSo = 0, flag = 1;
	while (test > 0) {
		soChuSo++;
		test /= 10;
	}
	while (N>0) {
		n = pow(10, soChuSo-1);
		dau = N / n;
		N -= dau * n;
		if (dau == 0 || dau == 1 || dau == 8 || dau == 9) {
			if (dau == 1) {
				M += 1 * n;
			}
		} else {
			flag = 0;
			break;
		}
		soChuSo--;
	}
	if (flag == 0 || M == 0) printf("INVALID\n");
	else printf("%lld\n", M);
}
int main() {
	int T;
	long long N;
	scanf("%d", &T);
	while(T--) {
		scanf("%lld", &N);
		catDoi(N);
	}
	return 0;
}
