#include <stdio.h>
#include <string.h>

char words[8000][101];
int main() {
	int n = 0, i, j, max = 0, count;
	while(scanf("%s", words[n]) != -1) {
		n++;
	}
	for(i = 0; i < n; i++) {
		if(checkThuanNghich(words[i])) {
			if(strlen(words[i]) > max) {
				max = strlen(words[i]);
			}
		}
	}
	for(i = 0; i < n; i++) {
		count = 0;
		if(checkThuanNghich(words[i]) && strlen(words[i]) == max && checkDangTruoc(words[i], i)) {
			for(j = i; j < n; j++) {
				if(strcmp(words[i], words[j]) == 0) {
					count++;
				}
			}
			printf("%s %d\n", words[i], count);
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
int checkThuanNghich(char a[]) {
	int i;
	for (i = 0; i < strlen(a)/2; i++) {
		if (a[i] != a[strlen(a) - i - 1]) return 0;
	}
	return 1;
}