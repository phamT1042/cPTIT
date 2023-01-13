#include<stdio.h>
#include<string.h>

int main() {
	int N;
	while(1) {
		scanf("%d", &N);
		getchar();
		if (N == 0) return 0;
		else {
			char s1[300],s2[300],s[300];
			gets(s1);
			gets(s2);
			gets(s);
			int count = 0;
			int flag = 1;
			while (1) {
				if (flag == 0) break;
				count++;
				if (count > 50) {
					flag = 0;
					break;
				}
				char test[300]= {};
				int k = 0;
				int i;
				for (i = 0; i < N; i++) {
					test[k++] = s2[i];
					test[k++] = s1[i];
				}
				if (strcmp(s, test) == 0) {
					flag = 1;
					break;
				} else {
					for (i = 0; i < N; i++) {
						s1[i] = test[i];
						s2[i] = test[i + N];
					}
				}
			}
			if (flag == 0) printf("-1\n");
			else printf("%d\n", count);
		}
	}
	return 0;
}