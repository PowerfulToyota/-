#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i = 0;
double num = 0;
int n = 0;
double fnsum(int n)

{
	for (i = 1; i <= n; i++)
		num += 1.0 / i;
	return num;
}
int main()
{
	scanf("%d", &n);
	fnsum(n);
	printf("%lf", num);
}
