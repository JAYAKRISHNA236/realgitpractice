/* To print all prime numbers in between the interval of numbers */

#include<stdio.h>
void printline();
void primecheck(int, int);

void main()
{
	int num1, num2;
	printf("Enter two numbers ");
	scanf("%d%d", &num1, &num2);
	
	printline();
	primecheck(num1, num2);
	printline();
	printf("4");
}
void printline()
{
	int i;
	for(i =0 ; i <= 136; i++)
		printf("-");
	printf("\n");
}
void primecheck(int x , int y)
{
	int i, j, count;
	
	printf("add a new line");
	for(i = x; i <= y ; i++)
	{
		count = 0;
		for( j = 1; j <= i ; j++)
		{
			if( i % j == 0)
			{
				count++;
			//	printf("%d\n", count);
			}
		}
		if(count == 2)
		{
			printf("%d  ", i);
		}
	}
	printf("\n");
}
