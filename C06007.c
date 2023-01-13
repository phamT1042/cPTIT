#include <stdio.h>
#include <string.h>

int main() {
	int i = 0, flag, k, j;
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	int length1 = strlen (s1);
	int length2 = strlen (s2);
	for (i; i < length1; i++) {
		flag = 1;
		for (j = 0; j < length2; j++) {
			if (s1[i+j] != s2[j]) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			for (k = i; k < length1; k++) {
				s1[k] = s1[k + length2];
			}
			length1 -= length2;
		}
	}
	printf("%s", s1);
	return 0;
}
