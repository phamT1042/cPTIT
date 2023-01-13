#include<stdio.h>
#include<string.h>

int start[27], end[27];
int main() {
	int i, j;
	char s[53];
	gets(s);
	int x = strlen(s);
	for(i = 0; i < x; i++) {
		end[s[i]] = i;
	}
	for(i = 0; i < x; i++) {
		if(i != end[s[i]]) start[s[i]] = i;
	}
	long long count = 0;
	for(i ='A'; i <= 'Z'; i++) {
		for(j = 'A'; j <= 'Z'; j++) {
			if(start[i] < start[j] && end[i] > start[j] && end[i] < end[j]) count++;
			else if(start[i] > start[j] && start[i] < end[j] && end[i] > end[j]) count++;
		}
	}
	printf("%lld", count / 2);
}