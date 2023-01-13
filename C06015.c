#include <stdio.h>
#include <string.h>

char s[50];
int main() {
	char tu[50];
	int T, i, start;
	scanf("%d", &T);
	getchar();
	while (T--) {
		start = 0;
		gets(s);
		char *token = strtok(s, " ");
		token = strtok (NULL, " ");
		while (token != NULL) {
			if (start > 0) {
				printf(" ");
			} else {
				start++;
			}
			strcpy (tu, token);
			if (tu[0] >= 97 && tu[0] <= 122) {
				tu[0] -= 32;
			}
			for (i = 1; i < strlen(tu); i++) {
				if (tu[i] >= 65 && tu[i] <= 90) {
					tu[i] += 32;
				}
			}
			printf("%s", tu);
			token = strtok (NULL, " ");
		}
		token = strtok (s, " ");
		strcpy (tu, token);
		for (i = 0; i < strlen(tu); i++) {
			if (tu[i] >= 97 && tu[i] <= 122) {
				tu[i] -= 32;
			}
		}
		printf(", %s\n", tu);
	}
	return 0;
}