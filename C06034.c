#include <stdio.h>
#include <string.h>

char s[1000];
int a[1000];
int main() {
	int i, T, lengthS, sum, bonus;
	scanf("%d", &T);
	while (T--) {
		sum = 0;
		scanf("%s", &s);
		lengthS = strlen(s);
		for (i = 0; i < lengthS; i++) {
			switch (s[i]) {
				case 'I':
					a[i] = 1;
					break;
				case 'V':
					a[i] = 5;
					break;
				case 'X':
					a[i] = 10;
					break;
				case 'L':
					a[i] = 50;
					break;
				case 'C':
					a[i] = 100;
					break;
				case 'D':
					a[i] = 500;
					break;
				case 'M':
					a[i] = 1000;
					break;
			}
		}
		for (i = 0; i < lengthS; i++) {
			if (a[i] >= a[i + 1]) sum += a[i];
			else {
				sum += abs(a[i] - a[i + 1]);
				i++;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}