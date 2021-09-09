#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char n[50], * p;
	p = n;
	printf("Enter string : ");
	scanf("%s", n);
	printf("\n-----------------\n");
	while (*p != '\0') {
		p++;
		if (*p == '\0') {
			printf("%c", *(p - 1));
		}
	}
	return 0;
}