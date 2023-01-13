#include<stdio.h>
#include<math.h>

int main() {
	int n, k;
	scanf("%d%d", &n, &k) ;
	if(phanTichthuaSo(n) >= k) printf("Yes") ;
	else printf("No") ;
}
int phanTichthuaSo(int n) {
	int test, count = 0;
	while(n > 1) {
		int test = n;
		while(test % 2 == 0) {
			count++;
			test/=2;
		};
		n--;
	}
	return count; 
}
