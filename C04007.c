#include <stdio.h>

int main() {
	int x, y, chen, i;
	scanf("%d %d", &x, &y);
	int a[x], b[y];
	for(i=0; i<x; i++) {
		scanf("%d", &a[i]);
	}
	for(i=0; i<y; i++) {
		scanf("%d", &b[i]);
	}
	scanf("%d", &chen);
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
	return 0;
}
