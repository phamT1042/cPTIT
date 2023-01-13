#include <stdio.h>

int main() {
	int i, j, k, l, n;
	scanf("%d", &n);
	k = n;
	for (i = 1; i <= n ; i++){
		for (j = k - 1; j > 0; j--){
			printf("~");
		}
		k--;
		for (l = 1; l <= n; l++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}