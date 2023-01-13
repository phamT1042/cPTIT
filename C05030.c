#include <stdio.h>

char a[1001][1001];
int soSo1trenhangthu[1001], soSo1trencotthu[1001], soSo2trenhangthu[1001], soSo2trencotthu[1001];
int main() {
	int T, N, M, i, j, count;
	scanf("%d", &T);
	while (T--) {
		count = 0;
		scanf("%d%d", &N, &M);
		for (i = 0; i < N; i++) {
			scanf("%s", &a[i]);
		}
		for (i = 0; i < 1001; i++) {
			soSo1trenhangthu[i] = 0;
			soSo1trencotthu[i] = 0;
			soSo2trenhangthu[i] = 0;
			soSo2trencotthu[i] = 0;
		}
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				if(a[i][j] == '1') {
					soSo1trenhangthu[i]++;
					soSo1trencotthu[j]++;
				}
				if(a[i][j]== '2') {
					soSo2trenhangthu[i]++;
					soSo2trencotthu[j]++;
				}
			}
		}
		for(i = 0; i < N; i++) {
			for(j = 0; j < M; j++) {
				if(a[i][j] == '1') {
					count += soSo2trenhangthu[i] * soSo2trencotthu[j];
				}
				if(a[i][j]=='2') {
					count += soSo1trenhangthu[i] * soSo1trencotthu[j];
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}