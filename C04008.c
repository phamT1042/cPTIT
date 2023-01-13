#include <stdio.h>

int main() {
	int x, y, chen, i, T, test;
	scanf("%d", &T);
	for (test = 1; test <= T; test++) {
		scanf("%d %d %d", &x, &y, &chen);
		int a[x], b[y];
		for(i=0; i<x; i++) {
			scanf("%d", &a[i]);
		}
		for(i=0; i<y; i++) {
			scanf("%d", &b[i]);
		}
		printf("Test %d:\n", test);
		for (i=0; i<x+y; i++) {
			if (i<chen) printf("%d ", a[i]);
			else {
				if (i<chen+y) {
					printf("%d ", b[i-chen]);
				} else {
					printf("%d ", a[i-y]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}