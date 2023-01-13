#include <stdio.h>
#include <string.h>

char s[10000];
char a[100][100];
void duaveChuThuong(char *s) {
	int i;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			s[i] += 32;
		}
	}
}
int tachTuvaoMang(char *s) {
	int soTu = 0;
	char *token = strtok(s, " ");
	while (token != NULL) {
		strcpy(a[soTu], token);
		token = strtok(NULL, " ");
		soTu++;
	}
	return soTu;
}
int main() {
	int soTutrongXau, i, j, count, flag, test;
	gets(s);
	duaveChuThuong(s);
	soTutrongXau = tachTuvaoMang(s);
	int b[soTutrongXau];
	for (i = 0; i < soTutrongXau; i++) {
		b[i] = 0;
	}
	for (i = 0; i < soTutrongXau; i++) {
		flag = 1;
		count = 1;
		for (test = 0; test < i; test++) {
			if (strcmp(a[test], a[i]) == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			for (j = i + 1; j < soTutrongXau; j++) {
				if (strcmp(a[i], a[j]) == 0) count++;
			}
			b[i] = count;
		}
	}
	for (i = 0; i < soTutrongXau; i++) {
		if (b[i] > 0)
		printf("%s %d\n", a[i], b[i]);
	}
	return 0;
}