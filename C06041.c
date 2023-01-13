#include <stdio.h>
#include <string.h>

char s[100001], max;
int main() {
	int i, start = -1, lengthS, lengthmax;
	scanf("%s", &s);
	lengthS = strlen(s);
	while (start != lengthS - 1) {
		max = 0;
		for (i = start + 1; i < lengthS; i++) {
			if (s[i] > max) {
				lengthmax = 1;
				max = s[i];
				start = i;
			} else {
				if (s[i] == max) {
					lengthmax++;
					start = i;
				}
			}
		}
		for (i = 0; i < lengthmax; i++) {
			printf("%c", max);
		}
	}
	return 0;
}