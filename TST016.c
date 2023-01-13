#include <stdio.h>
#include <string.h>

//count[0] = dem(; count[1] = dem); count[2] = dem{; count[3] = dem};
//count[4] = dem[; count[5] = dem]; count[6] = dem'; count[7] = dem";
char s[10000];
int count[8] = {0, 0, 0, 0, 0, 0, 0, 0};
int main() {
	gets(s);
	int i, flag = 1;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == '(') count[0] += 1;
		if (s[i] == ')') count[1] += 1;
		if (s[i] == '{') count[2] += 1;
		if (s[i] == '}') count[3] += 1;
		if (s[i] == '[') count[4] += 1;
		if (s[i] == ']') count[5] += 1;
		if (s[i] == 39) count[6] += 1;
		count[7] += 1;
	}
	for (i = 1; i < 6; i += 2) {
		if (count[i] != count[i - 1]) {
			flag = 0;
			break;
		}
	}
	if (flag == 1) {
		if (count[6] % 2 == 0 && count[7] % 2 == 0) printf("%d", flag);
		else printf("%d", flag);
	} else printf("%d", flag);
	return 0;
}