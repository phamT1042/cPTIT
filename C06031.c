#include <stdio.h>
#include <string.h>
#include <math.h>

//l[i]: do dai day con tang dai nhat ket thuc o chi so i
//l[i] = max(l[i], l[j] + 1) : s[i] > s[j] && j < i
char s[60];
int l[60];
int main() {
	int i, j, lengthmax = 1, lengthS;
	gets(s);
	lengthS = strlen(s);
	int l[lengthS];
	for (i = 0; i < lengthS; i++) {
		l[i] = 1;
	}
	for (i = 0; i < lengthS; i++) {
		for (j = 0; j < i; j++) {
			if (s[i] > s[j]) {
				l[i] = fmax(l[i], l[j] + 1);
			}
		}
	}
	for (i = 0; i < lengthS; i++) {
		if (l[i] > lengthmax) lengthmax = l[i];
	}
	printf("%d", 26 - lengthmax);
	return 0;
}