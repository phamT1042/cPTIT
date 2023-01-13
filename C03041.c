#include <stdio.h>
#include <math.h>

int main() {
	int i, a, b, c, d;
	scanf("%d", &i);
	while (i--) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (abs(a-c)==abs(b-d)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}