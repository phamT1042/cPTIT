#include <stdio.h>
char s[100001];
int my_strlen(char *s) {  
    char *p = s;
    while (*p != '\0')
    p++;
    return p - s; 
}
int main() {
    gets(s);
    printf("%d", my_strlen(s) - 1);
    return 0;
}