#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, cuoi, flag;
	long long N;
    scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &N);
		flag = 1;
		cuoi = N % 10;
		N /= 10;
		while (N > 0) {
			if (N % 10 > cuoi){
				flag = 0;
				break;
			}
			else cuoi = N % 10;
			N /= 10;
		}
		if (flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}