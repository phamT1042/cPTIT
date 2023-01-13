#include <stdio.h>
#include <string.h>

char s[1000];
int main() {
	int T, j, flag, flagSo;
	char i;
	scanf("%d", &T);
	getchar();
	while (T--) {
		flag = 1;
		gets(s);
		if (s[0] == '0')
			printf("INVALID\n");
		else {
			for (i = '0'; i <= '9'; i++) {
				flagSo = 0;
				for (j = 0; j < strlen(s); j++) {
					if (s[j] < 48 || s[j] > 57) {
						flag = 0;
						break;
					}
					if (s[j] == i) {
						flagSo = 1;
						break;
					}
				}
				if (flag == 0 || flagSo == 0) {
					break;
				}
			}
			if (flag == 0) printf("INVALID\n");
			else {
				if (flagSo == 0) printf("NO\n");
				else printf("YES\n");
			}
		}
	}
	return 0;
}