#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;//��������forѭ���ı���
	int c = 1;//c�Ľ׳˴�1��ʼ
	int n = 1;//��1��ʼ����
	int sum = 0;
	int h = 0;
	scanf("%d", &h);
	while (n <= h)
	{
		c = 1;
		for (i = 1; i <= n; i++)//forѭ��Ϊ����ÿ�����׳�
		{
			c *= i;
		}
		sum += c;//sum������׳˵ĺ�
		n++;
	}
	printf("%d", sum);
	return 0;
}