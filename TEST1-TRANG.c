#include <stdio.h>

int main() {
	int a, i=0;
	int x[100];
	scanf("%d", &a);
	if (a==0) printf("0");
	else {
		while (a>0) {
			x[i] = a%2;
			i++;
			a /= 2;
		}
		i--;
		for (i; i>=0; i--) {
			printf("%d", x[i]);
		}
	}
	return 0;
}