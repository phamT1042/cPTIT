#include <stdio.h>

struct khach {
	int T;
	int D;
};

int main() {
	int i, j, N, swap;
	scanf("%d", &N);
	struct khach listKhach[N];
	for (i = 0; i < N; i++) {
		scanf("%d%d", &listKhach[i].T, &listKhach[i].D);
	}
	for (i = 0; i < N - 1; i++) {
		for (j = i + 1; j < N; j++) {
			if (listKhach[i].T > listKhach[j].T) {
				swap = listKhach[j].T;
				listKhach[j].T = listKhach[i].T;
				listKhach[i].T = swap;
				swap = listKhach[j].D;
				listKhach[j].D = listKhach[i].D;
				listKhach[i].D = swap;
			}
		}
	}
	for (i = 0; i < N - 1; i++) {
		if (listKhach[i].T + listKhach[i].D > listKhach[i+1].T) {
			listKhach[i+1].T = listKhach[i].T + listKhach[i].D;
		}
	}
	printf("%d", listKhach[N-1].T + listKhach[N-1].D);

	return 0;
}