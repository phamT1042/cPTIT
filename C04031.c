#include <stdio.h>

int a[100], l[100];
int main() {
	int test, T, N, i, j;
	int lengthmax;
	scanf("%d", &T);
	for (test = 1; test <= T; test++) {
		lengthmax = 1;
		scanf("%d", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &a[i]);
			l[i] = 0;
		}
		printf("Test %d:\n", test);
		l[0] = 1;
		for (i = 1; i < N; i++) {
			if (a[i] > a[i - 1]) l[i] = l[i - 1] + 1;
			else l[i] = 1;
		}
		for (i = 0; i < N; i++) {
			if (l[i] > lengthmax) lengthmax = l[i];
		}
		printf("%d\n", lengthmax);
		for (i = 0; i < N; i++) {
			if (l[i] == lengthmax) {
				for (j = i - lengthmax + 1; j <= i; j++) {
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
