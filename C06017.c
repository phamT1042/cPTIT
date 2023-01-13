#include <stdio.h>
#include <string.h>

char s1[100][100];
char s2[100][100];
char s3[100][100];
int main() {
	char S1[100], S2[100], swap[100];
	int soTuS1, soTuS2, i, j, ktra, flag, k = 0;
	gets(S1);
	gets(S2);
	soTuS1 = tachTuvaoMang(S1, s1);
	soTuS2 = tachTuvaoMang(S2, s2);
	for (i = 0; i < soTuS1; i++) {
		flag = 0;
		for (ktra = 0; ktra < i; ktra++) {
			if (strcmp(s1[ktra], s1[i]) == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			for (j = 0; j < soTuS2; j++) {
				if (strcmp(s1[i], s2[j]) == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				strcpy(s3[k], s1[i]);
				k++;
			}
		}
	}
	for (i = 0; i < k - 1; i++) {
		for (j = i + 1; j < k; j++) {
			if (strcmp(s3[i], s3[j]) > 0) {
				strcpy(swap, s3[j]);
				strcpy(s3[j], s3[i]);
				strcpy(s3[i], swap);
			}
		}
	}
	for (i = 0; i < k; i++) {
		printf("%s ", s3[i]);
	}
	return 0;
}
int tachTuvaoMang(char S[], char s[100][100]) {
	int i = 0;
	char *token = strtok(S, " ");
	while (token != NULL ) {
		strcpy(s[i], token);
		i++;
		token = strtok(NULL, " ");
	}
	return i;
}