/* Write a program ro check whether a number is even or not */

#include<stdio.h>
void printline();
void numcheck(int);

void main()
{
	int num;

	printf("Enter a number ");
	scanf("%d", &num);

	printline();
	numcheck(num);
	printline();
}
void printline()
{
	int i;
	for( i=0; i <= 40; i++)
		printf("-");
	printf("\n");
}
void numcheck(int x)
{
	if( x%2 == 0 )
		printf("%d is an even number\n", x);
	else
		printf("%d is odd number\n", x);
}
