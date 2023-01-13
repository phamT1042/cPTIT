#include <stdio.h>
#include <string.h>

char s[100][100];
char S[100];
char swap[100];
int main() {
	int T, M, i, j;
	scanf("%d", &T);
	getchar();
	while (T--) {
		i = 0;
		scanf("%d", &M);
		gets(S);
		char *token = strtok(S, " ");
		while (token != NULL) {
			strcpy(s[i], token);
			i++;
			token = strtok(NULL, " ");
		}
		for (i = 0; i < M - 1; i++) {
			for (j = i + 1; j < M; j++) {
				if (sapXep(s[i], s[j]) > 0) {
					strcpy(swap, s[j]);
					strcpy(s[j], s[i]);
					strcpy(s[i], swap);
				}
			}
		}
		for (i = 0; i < M; i++) {
			printf("%s", s[i]);
		}
		printf("\n");
	}
	return 0;
}
int sapXep(char s1[], char s2[]) {
	char a[100], b[100], c[100], d[100];
	strcpy(a, s1);
	strcpy(c, a);
	strcpy(b, s2);
	strcpy(d, b);
	strcat(a, b);
	strcat(d, c);
	if (strcmp(a, d) < 0) return -1;
	return 1;
}