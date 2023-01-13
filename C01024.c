#include <stdio.h>

int main() {
	long long n, N;
	int i, end = 0;
	scanf("%lld", &n);
	for (i = 1; i <= n; i++) {
		scanf("%lld", &N);
		if (N < 10) printf("NO\n");
		else {
			end = N % 10;
			while (N >= 10) {
				N /= 10;
			}
			if (N == end) printf("YES\n");
			else printf("NO\n");
		}
		end = 0;
	}
	return 0;
}