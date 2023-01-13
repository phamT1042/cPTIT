#include <stdio.h>
#include <math.h>

struct diem {
	float x;
	float y;
};
float doDaiCanh(struct diem a , struct diem b);
int main() {
	int T, i;
	float AB, BC, AC;
	scanf("%d", &T);
	while (T--) {
		struct diem cacDiem[3];
		for (i = 0; i < 3; i++) {
			scanf("%f%f", &cacDiem[i].x, &cacDiem[i].y);
		}
		AB = doDaiCanh(cacDiem[0], cacDiem[1]);
		BC = doDaiCanh(cacDiem[1], cacDiem[2]);
		AC = doDaiCanh(cacDiem[0], cacDiem[2]);
		if (AB + BC > AC && AB + AC > BC && BC + AC > AB) {
			printf("%.3f\n", AB + AC + BC);
		}
		else printf("INVALID\n");
	}
	return 0;
}
float doDaiCanh(struct diem a , struct diem b) {
	return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}