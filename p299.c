/* To find Maximum and minimum of a numbers by using functions */

#include<stdio.h>
int maxchecker(int , int);
int minchecker(int, int);
void printline();

void main()
{
	int min, max, num1, num2;
	
	printf("Enter two numbers ");
	scanf("%d%d", &num1, &num2);

	max = maxchecker(num1, num2);
	min = minchecker(num1, num2);
	printline();
	printf("Maximum number = %d\n", max);
	printline();
	printf("Minimum number = %d\n", min);
	printline();
}
void printline()
{
	int i;
	for(i = 0; i <= 40; i++)
	{
		printf("-");
	}
	printf("\n");
}
int maxchecker(int x, int y)
{
	if( x > y  )
		return(x);
	else
		return(y);

}
int minchecker(int x, int y)
{
	if( x < y )
		return (x);
	else
		return (y);
}
