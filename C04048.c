#include <stdio.h>

int main() {
	int N, M, nhay, K, i, j, sum = 0, toaDoden, diemDau, diemCuoi;
	scanf("%d%d%d", &N, &M, &K);
	int viTri[N + 2];
	for (i = 1; i <= N; i++) {
		viTri[i] = 0;
	}
	viTri[0] = 1;
	viTri[N + 1] = 1;
	while(M--) {
		scanf("%d", &toaDoden);
		diemDau = toaDoden - K;
		diemCuoi = toaDoden + K;
		if(diemDau > 0) {
			for(i = diemDau; i <= toaDoden; i++) {
				viTri[i] = 1;
			}
		} else {
			for(i = 1; i <= toaDoden; i++) {
				viTri[i] = 1;
			}
		}
		if(diemCuoi <= N) {
			for(i = toaDoden + 1; i <= diemCuoi; i++) {
				viTri[i] = 1;
			}
		} else {
			for(i = toaDoden + 1; i <= N; i++) {
				viTri[i] = 1;
			}
		}
	}
	nhay = 2 * K + 1;
	for(i = 1; i <= N; i++) {
		int count = 0;
		while(viTri[i] == 0) {
			count++;
			i++;
		}
		int p = count / nhay;
		int r = count % nhay;
		if(r == 0) sum += p;
		else sum += p + 1;
		if (count != 0) i--;
	}
	printf("%d",sum);
	return 0;
}