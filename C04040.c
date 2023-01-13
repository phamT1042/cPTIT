#include <stdio.h>

int main() {
	int T, i, N;
	long long sum, sumMax;
	scanf("%d", &T);
	while (T--) {
		sum = 0;
		sumMax = -1e15;
		scanf("%d", &N);
		int A[N];
		for (i = 0; i < N; i++) {
			scanf("%d", &A[i]);
			sum += A[i];
			if (sumMax < sum) sumMax = sum;
			if (sum < 0) sum = 0;
		}
		printf("%lld\n", sumMax);
	}
	return 0;
}