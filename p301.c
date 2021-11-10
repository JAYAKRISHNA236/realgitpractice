/* check whether a number is a prime or arm strong or perfect number */

#include<stdio.h>
void printline();
void primecheck(int);
void armstrongcheck(int);
void perfectcheck(int);

void main()
{
	int num;
	printf("Enter a number ");
	scanf("%d", &num);
	
	printline();
	primecheck(num);
	armstrongcheck(num);
	perfectcheck(num);
}
void printline()
{
	int i;
	for(i = 0; i <= 40 ; i++)
		printf("-");
	printf("\n");
}
void primecheck( int x )
{
	int i, count = 0;
	for(i = 1; i <= x ; i++  )
	{
		if(x%i == 0)
		{
			count++;
		}
	}
	if( count == 2)
		printf("%d is a prime number\n", x);
	else
		printf("%d is not a prime number\n", x);

	printline();	
}
void armstrongcheck(int x)
{
	int p, cal=0, cube, i, j;
	p = x;
	while( p != 0)
	{
		cube = 1;
		i = p%10;
		for(j =1 ; j <= 3; j++)
		{
			cube *= i; 
		}
		cal += cube;
		p = p/10;
	}
	if( cal == x)
		printf("%d is a armstrong number\n", x);
	else
		printf("%d is not a armstrong number\n", x);
	printline();
}
void perfectcheck(int x)
{
	int sum = 0, i;
	for(i = 1; i < x; i++)
	{
		if( x % i == 0)
		{
			sum += i;
		}
	}
	if(sum == x)
		printf("%d is a perfect number\n", x);
	else
		printf("%d is not a perfect number\n" , x);
	printline();

}
