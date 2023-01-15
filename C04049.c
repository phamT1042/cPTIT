#include <stdio.h>
long long ucln (int a, int b) {
    if (b == 0) return a;
    return ucln (b, a % b);
}
long long bcnn (int a, int b) {
    return (a * b) / ucln(a, b);
}
int main() {
	int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        int a[n];
        long long b[n + 1];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        b[0] = a[0];
        b[n] = a[n - 1];
        for (int i = 1; i < n; i++) {
            b[i] = bcnn (a[i - 1], a[i]);
        }
        for (int i = 0; i <= n; i++) {
            printf("%lld ", b[i]);
        }
        printf("\n");
    }
	return 0;
}
