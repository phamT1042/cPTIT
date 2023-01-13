#include <stdio.h>

int main() {
	int N, a, b, start, end, diemChung, flag = 1;
	scanf("%d", &N);
	if (N<4) {
		N -= 1;
		while (N--) {
			scanf("%d %d", &a, &b);
		}
		printf("Yes");
	} else {
		scanf("%d %d", &a, &b);
		start = a;
		end = b;
		scanf("%d %d", &a, &b);
		if (start==a || start==b || end==a || end == b) {
			if (start==a || start==b) {
				if (start==a) diemChung = a;
				else diemChung = b;
			} else {
				if (end==a) diemChung = a;
				else diemChung = b;
			}
			N -= 3;
			while (N--) {
				scanf("%d %d", &a, &b);
				if (diemChung != a && diemChung != b) {
					flag = 0;
				}
			}
		} else {
			flag = 0;
			N -= 3;
			while (N--) {
				scanf("%d %d", &a, &b);
			}
		}
		if (flag == 1) printf("Yes");
		else printf("No");

	}
	return 0;
}