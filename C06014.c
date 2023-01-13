#include <stdio.h>
#include <string.h>

char s[80];
int main() {
	char tu[80];
	int T, i;
	scanf("%d", &T);
	getchar();
	while (T--) {
		gets(s);
		char *token = strtok(s, " ");
		while (token != NULL) {
			strcpy (tu, token);
			if (tu[0] >= 97 && tu[0] <= 122) {
				tu[0] -= 32;
			}
			for (i = 1; i < strlen(tu); i++) {
				if (tu[i] >= 65 && tu[i] <= 90) {
					tu[i] += 32;
				}
			}
			printf("%s ", tu);
			token = strtok (NULL, " ");
		}
		printf("\n");
	}
	return 0;
}