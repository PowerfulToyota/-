#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;//用来定义for循环的变量
	int c = 1;//c的阶乘从1开始
	int n = 1;//从1开始乘起
	int sum = 0;
	int h = 0;
	scanf("%d", &h);
	while (n <= h)
	{
		c = 1;
		for (i = 1; i <= n; i++)//for循环为了求每个数阶乘
		{
			c *= i;
		}
		sum += c;//sum用来求阶乘的和
		n++;
	}
	printf("%d", sum);
	return 0;
}