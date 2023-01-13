#include <stdio.h>

int main () {
	int N, i, U, D;
	scanf("%d", &N);
	int MinUp = 50001;
	int MinDown = 50001;
	int SumUp = 0;
	int SumDown = 0;
	for (i = 0; i < N; i++) {
		scanf("%d%d", &U, &D);
		SumUp += U;
		SumDown += D;
		if (U < MinUp) MinUp = U;
		if (D < MinDown) MinDown = D;
	}
	SumUp += MinDown;
	SumDown += MinUp;
	if (SumUp < SumDown) printf("%d", SumDown);
	else printf("%d", SumUp);
	return 0;
}