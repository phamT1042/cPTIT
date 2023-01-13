#include <stdio.h>
#include <math.h>

int main() {
	int T;
	double xa, ya, xb, yb, xc, yc;
	double AB, BC, CA;
	double p, S;
	scanf("%d", &T);
	while (T--) {
		scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &xb, &yb, &xc, &yc);
		AB = sqrt(pow(xa-xb, 2) + pow(ya-yb, 2));
		BC = sqrt(pow(xb-xc, 2) + pow(yb-yc, 2));
		CA = sqrt(pow(xc-xa, 2) + pow(yc-ya, 2));
		if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
			p = (AB + BC + CA)/2;
			S = sqrt(p*(p-AB)*(p-BC)*(p-CA));
			printf("%.2lf\n", S);
		} else {
			printf("INVALID\n");
		}
	}
}