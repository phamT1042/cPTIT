#include <stdio.h>

int main() {
	int n;
	int day, week, year=0;
	scanf("%d", &n);
	year = n/365;
	n -= year * 365;
	week = n/7;
	day = n - week * 7;
	printf("%d %d %d", year, week, day);
	return 0;
}