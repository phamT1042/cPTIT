#include <stdio.h>
#include <math.h>

int main() {
	int t;
	long long N;
	scanf("%d", &t);
	while(t--){
		scanf("%lld", &N);
		if (test(N)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
int test(long long N){
	long long test = N;
	long long n = 0;
	int dau = 0;
	int cuoi = 0;
	int sochuso = 0;
		while(test>0){
			sochuso++;
			test /= 10;
		}
		if (sochuso % 2 == 0) {return 0;}
		else {
		while (N>0){
			n = pow(10, sochuso-1);
			dau = N / n;
			cuoi = N % 10;
			if (dau == cuoi && dau % 2 != 0 && cuoi % 2 != 0){
				if (sochuso < 2) {
					N -= dau;}
				else {
				N = (N - dau * n - cuoi)/10;
				sochuso -= 2; 
				}         
			}
			else return 0;
		}
		return 1;
	}
}