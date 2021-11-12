/* To print natural numbers upto n */

#include<stdio.h>
int natural(int, int);

void main()
{
	int num1, num2, y;

	printf("Enter a number ");
	scanf("%d%d", &num1, &num2);
	
	y = natural(num1, num2);
	printf("%d\n", y);
}
int natural(int x, int y)
{
	if(y == x)
		return(y);
	else	
	{
		printf("%d ", x);
		x++;
		natural(x, y);
	}
	else if
		hello;
}
