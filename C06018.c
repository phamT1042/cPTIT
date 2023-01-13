#include <stdio.h>
#include <string.h>

char cacTuS1[200][200];
char cacTuS2[200][200];
int main() {
	char S1[200], S2[200], swap[200];
	int T, soTuS1, soTuS2, i, j, flag;
	scanf("%d", &T);
	getchar();
	while (T--) {
		gets(S1);
		gets(S2);
		soTuS1 = tachTuvaoMang(S1, cacTuS1);
		soTuS2 = tachTuvaoMang(S2, cacTuS2);
		for (i = 0; i < soTuS1 - 1; i++) {
			for (j = i + 1; j < soTuS1; j++) {
				if (strcmp(cacTuS1[i], cacTuS1[j]) > 0) {
					strcpy(swap, cacTuS1[j]);
					strcpy(cacTuS1[j], cacTuS1[i]);
					strcpy(cacTuS1[i], swap);
				}
			}
		}
		for (i = 0; i < soTuS1; i++) {
			flag = 0;
			while (strcmp(cacTuS1[i], cacTuS1[i + 1]) == 0) {
				i++;
			}
			for (j = 0; j < soTuS2; j++) {
				if (strcmp(cacTuS1[i], cacTuS2[j]) == 0) {
					flag = 1;
					break;
				}
			}
			if (!flag) printf("%s ", cacTuS1[i]);
		}
		printf("\n");
	}
	return 0;
}
int tachTuvaoMang(char S[], char s[200][200]) {
	int i = 0;
	char *token = strtok(S, " ");
	while (token != NULL ) {
		strcpy(s[i], token);
		i++;
		token = strtok(NULL, " ");
	}
	return i;
}