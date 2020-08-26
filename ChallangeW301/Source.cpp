#include<stdio.h>
int main()
{
	int i, j, k;
	scanf_s("%d", &i);
	if (i <= 0)
		printf("Error");
	else for (j = 1; j <= i; j++)
	{
		for (k = j; k < i; k++)
		{
			printf(" ");
		}

		for (k = 1; k <= j; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (j = 1; j < i; j++)
	{
		for (k = 1; k <= j; k++)
		{
			printf(" ");
		}

		for (k = j; k < i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}