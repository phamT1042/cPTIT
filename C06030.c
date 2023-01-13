#include <stdio.h>
#include <string.h>

char words[1002][101];
int main() {
	int n = 0, i, j, max = 0, count;
	while(scanf("%s", words[n]) != -1) {
		n++;
	}
	for(i = 0; i < n; i++) {
		if(strlen(words[i]) > max) {
			max = strlen(words[i]);
		}
	}
	for(i = 0; i < n; i++) {
		count = 0;
		if(strlen(words[i]) == max && checkDangTruoc(words[i], i)) {
			for(j = i; j < n; j++) {
				if(strcmp(words[i], words[j]) == 0) {
					count++;
				}
			}
			printf("%s %d %d\n", words[i], max, count);
		}
	}
	return 0;
}
int checkDangTruoc(char x[], int a) {
	int i = 0;
	for (i; i < a; i++) {
		if (strcmp(x, words[i]) == 0) return 0;
	}
	return 1;
}