#include<stdio.h>

int A[1000];
long long B[1001];
long long BCNN (int x, int y) {
	return x * y/ UCLN(x, y);
}
long long UCLN (int x, int y) {
	while(x * y != 0) {
		if(x > y) x %= y;
		else y %= x;
	}
	return x + y;
}
int main() {
	int T, i, N, j, start;
	scanf("%d", &T);
	while(T--) {
		scanf("%d", &N);
		for(i = 0; i < N; i++) {
			scanf("%d", &A[i]);
		}
		j = 0;
		start = 1;
		for(i = 0; i < N; i++) {
			B[j]= BCNN(start, A[i]);
			start = A[i];
			j++;
		}
		B[N] = A[N-1];
		for(i = 0; i <= N; i++) {
			printf("%lld ", B[i]);
		}
		printf("\n");
	}
	return 0;
}
