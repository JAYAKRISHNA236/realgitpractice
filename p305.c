/* To check whether a number is perfect number or not */

#include<stdio.h>

void perfectcheck(int, int);

void main()
{
	int num1, num2;
	
	printf("Enter two numbers ");
	scanf("%d%d", &num1, &num2);
	
	perfectcheck(num1,num2);	
}
void perfectcheck(int x, int y)
{
	int i, j, sum = 0;

	for(i = x; i <= y ; i++)
	{
		sum = 0;
		for(j = 1; j < i ; j++)
		{
			if( (i % j) == 0)
			{
				sum += j;
			}
		}
		if( sum == i)
		{
			printf("%d\t", i);
		}
	}
	printf("\n");	
}
