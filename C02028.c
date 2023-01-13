#include<stdio.h>
int main() {
	int i, j, n;
	char x, y;
	scanf("%d", &n);
	x = 'A';
	for(i = n; i >= 1; i--) {
		y = x;
		for(j = 0; j < i; j++) {
			printf("%c", y);
			y+=2;
		}
		x+=2;
		printf("\n");
	}
	return 0;
}