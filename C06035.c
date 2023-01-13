#include <stdio.h>
#include <string.h>

int main() {
	int T, i, count;
	char S[30];
	scanf("%d",&T);
	getchar();
	while(T--) {
		gets(S);
		count = 0;
		for(i = 0; i < strlen(S)/2; i++) {
			if(S[i] != S[strlen(S) - 1 - i]) {
				count++;
			}
		}
		if(strlen(S) % 2 == 0) {
			if(count == 1) printf("YES\n");
			else printf("NO\n");
		} else {
			if(count == 0 || count == 1) printf("YES\n");
			else printf("NO\n");
		}
	}
}