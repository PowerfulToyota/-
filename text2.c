#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int num = 1;
	printf("请输入一个数(n<20):");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		num *= i;
	}
	printf("%d\n", num);
	return 0;
}