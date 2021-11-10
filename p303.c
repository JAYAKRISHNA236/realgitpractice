/* Check whether a number is a strong or not */

#include<stdio.h>

void printline();
void strongcheck(int, int);

void main()
{
	int num1, num2;

	printf("Enter two numbers ");
	scanf("%d%d", &num1, &num2);

	printline();
	strongcheck(num1, num2);
	printline();
}
void printline()
{
	int i;
	for(i = 0; i <= 136; i++)
		printf("-");
	printf("\n");
}
void strongcheck(int x, int y)
{
	int i, j, fact, sum = 0, k;

	for( i = x; i <= y ; i++)
	{
		sum = 0;
		k = i;
		while( k != 0 )
		{
			j = k%10;
			fact = 1;
			while( j != 0 )
			{
				fact = fact * (j);
				j--;
			}
			k = k/10;
			sum += fact;
		}
		if( i == sum)
			printf("%d\t", i);
	}
	printf("\n");
}
