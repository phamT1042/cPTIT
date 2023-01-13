#include <stdio.h>
#include <string.h>

int main() {
	int i, T;
	scanf("%d", &T);
	getchar();
	for (i = 1; i <= T; i++) {
		char S1[200], S2[20];
		gets(S1);
		gets(S2);
		printf("Test %d: ", i);
		char *token = strtok (S1, " ");
		while (token != NULL) {
			if (strcmp_and_strlwr(token, S2) == 0) {
				printf("%s ", token);
			}
			token = strtok (NULL, " ");
		}
		printf("\n");
	}
	return 0;
}

int strcmp_and_strlwr(char a[], char b[]) {
	if (strlen(a) != strlen(b)) return 0;
	int i;
	char tu1[200], tu2[20];
	strcpy (tu1, a);
	strcpy (tu2, b);
	for (i = 0; i < strlen(a); i++) {
		if (tu1[i]>=65 && tu1[i]<=90) {
			tu1[i] += 32;
		}
		if (tu2[i]>=65 && tu2[i]<=90) {
			tu2[i] += 32;
		}
	}
	for (i = 0; i < strlen(a); i++) {
		if (tu1[i] != tu2[i]) return 0;
	}
	return 1;
}