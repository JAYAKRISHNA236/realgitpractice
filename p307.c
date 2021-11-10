/* To find the power of a number by using recursion */

#include<stdio.h>

int power(int, int);

void main()
{
	int num, pow, p;

	printf("Enter a number ");
	scanf("%d", &num);
	printf("Enter the power ");
	scanf("%d", &pow);

	p = power(num , pow);
	printf("Power of %d to the %d is %d\n", num, pow, p);
}
int power(int n, int p)
{
	int pow;
	if(p == 1)
		return(n);
	else
	{
		pow = n * power(n , p-1);
//		printf("pow = %d\n", pow);
	}
	return(pow);

}
