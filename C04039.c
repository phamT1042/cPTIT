#include<stdio.h>
#include<math.h>

int main() {
	int a,b;
	scanf("%d%d", &a, &b);
	int s = abs(a - b);
	int check = sqrt(s);
	if (check * check == s) {
		printf("%d", 2 * check - 1);
	} else if((check * (check + 1)) >= s) printf("%d", 2 * check);
	else printf("%d", 2 * check + 1);
	return 0;
}