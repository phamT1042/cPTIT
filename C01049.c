#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	long long N;
	int chan, n, le;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		chan = 0;
		le = 0;
		scanf("%lld", &N);
		if (N == 0) chan++;
		else {
			while (N > 0){
				if ((N % 10) % 2 == 0) chan++;
				else le++;
				N /= 10;
            }
		}
	printf("%d %d\n", le, chan);}
	return 0;
}