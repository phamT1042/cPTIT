#include <stdio.h>

int main() {
	int N, chan = 0, le = 0;
	scanf("%d", &N);
	if (N == 0) chan++;
    else {
		while (N > 0) {
			if ((N % 10) % 2 == 0) chan++;
            else le++;
			N /= 10;
		}
	}
	printf("%d %d", le, chan);
	return 0;
}