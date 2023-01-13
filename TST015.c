#include <stdio.h>
#include <math.h>

struct tamgiac {
	int canh1;
	int canh2;
	int canh3;
	double dientich;
};

int main() {
	int N, i, j;
	double p;
	scanf("%d", &N);
	struct tamgiac dsTG[N];
	struct tamgiac swap;
	for (i = 0; i < N; i++) {
		scanf("%d%d%d", &dsTG[i].canh1, &dsTG[i].canh2, &dsTG[i].canh3);
		p = (dsTG[i].canh1 + dsTG[i].canh2 + dsTG[i].canh3) / 2;
		dsTG[i].dientich = sqrt(p * (p - dsTG[i].canh1) * (p - dsTG[i].canh1) * (p - dsTG[i].canh1));
	}
	for (i = 0; i < N - 1; i++) {
		for (j = i + 1; j < N; j++) {
			if (dsTG[i].dientich > dsTG[j].dientich) {
				swap = dsTG[j];
				dsTG[j] = dsTG[i];
				dsTG[i] = swap;
			}
		}
	}
	for (i = 0; i < N; i++) {
		printf("%d %d %d\n", dsTG[i].canh1, dsTG[i].canh2, dsTG[i].canh3);
	}
	return 0;
}