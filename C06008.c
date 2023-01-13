#include <stdio.h>
#include <string.h>

int main() {
	char mang[100][100];
	int i, soTu = 0, j;
	char s[101];
	gets(s);
	char *token = strtok(s, " ");
	while (token != NULL) {
		strcpy(mang[soTu], token);
		soTu++;
		token = strtok (NULL, " ");
	}
	for (i = 0; i < soTu - 1; i++) {
		for (j = i + 1; j < soTu; j++) {
			if (strcmp(mang[i], mang[j]) == 0) {
				strcpy(mang[j], " ");
			}
		}
	}
	for (i = 0; i < soTu; i++) {
		if (strcmp(mang[i], " ") != 0)
			printf("%s ", mang[i]);
	}
}