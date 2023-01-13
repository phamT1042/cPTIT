#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct daThuc {
	long long heSo;
	int bac;
};
struct daThuc s1[1000];
struct daThuc s2[1000];
char S1[10000];
char S2[10000];
int main() {
	int T, i, j, k, flag, soDathucS1, soDathucS2;
	long long swap;
	scanf("%d", &T);
	getchar();
	while (T--) {
		gets(S1);
		gets(S2);
		soDathucS1 = tachVaomang(s1, S1);
		soDathucS2 = tachVaomang(s2, S2);
		k = soDathucS1;
		for (j = 0; j < soDathucS2; j++) {
			flag = 0;
			for (i = 0; i < soDathucS1; i++) {
				if (s2[j].bac == s1[i].bac) {
					s1[i].heSo += s2[j].heSo;
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				s1[k].bac = s2[j].bac;
				s1[k].heSo = s2[j].heSo;
				k++;
			}
		}
		soDathucS1 = k;
		for (i = 0; i < soDathucS1 - 1; i++) {
			for (j = i + 1; j < soDathucS1; j++) {
				if (s1[i].bac < s1[j].bac) {
					swap = s1[j].bac;
					s1[j].bac = s1[i].bac;
					s1[i].bac = swap;
					swap = s1[j].heSo;
					s1[j].heSo = s1[i].heSo;
					s1[i].heSo = swap;
				}
			}
		}
		for (i = 0; i < soDathucS1; i++) {
			printf("%lld*x^%d ", s1[i].heSo, s1[i].bac);
			if (i != soDathucS1 - 1) {
				printf("+ ");
			}
		}
		printf("\n");
	}
	return 0;
}
int tachVaomang(struct daThuc s[], char S[]) {
	char nhan[10000];
	int i = 0, flag, j = 0;
	char test[100];
	char *token = strtok(S, "*x^ +");
	while (token != NULL) {
		flag = 0;
		strcpy(nhan, token);
		if (i % 2 == 0) {
			s[j].heSo = atoi(nhan);
		} else {
			s[j].bac = atoi(nhan);
			flag = 1;
		}
		i++;
		if (flag == 1) j++;
		token = strtok(NULL, "*x^ +");
	}
	return j;
}