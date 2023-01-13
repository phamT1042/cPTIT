#include <stdio.h>

int main() {
	int N;
	long long a, b, minHang, minCot;
	scanf("%d", &N);
	scanf("%lld%lld", &a, &b);
	minHang = a;
	minCot = b;
	N -= 1;
	while (N--) {
		scanf("%lld%lld", &a, &b);
		if (a < minHang) minHang = a;
		if (b < minCot) minCot = b;
	}
	printf("%lld", minHang * minCot);
	return 0;
}