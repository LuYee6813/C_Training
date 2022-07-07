#include<stdio.h>  

int main()
{
	int i = 0;
	int line = 0;
    printf("line:");
	scanf("%d", &line);  

	for (i = 0; i < line; i++) // 上半部分跑幾行
	{
		int j = 0;
		for (j = 0; j < line - i - 1; j++) // 空格空幾個
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) // *要幾個
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}