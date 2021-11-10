/* Writing a fuction for cube of a number */

#include<stdio.h>
#include<string.h>
long cube(int x);
void printline(int len);

int main()
{
	int num;
        long cubed;
	printf("Enter a number ");
	scanf("%d", &num);

	printline(35);
	cubed = cube(num);
	printf("Cube of a number is %ld\n", cubed);
	printline(35);
}
long cube(int x)
{
	int p = 1, i;

	for(i = 1; i <= 3; i++)
	{
		p *= x;
	}
	printf("P =%d\n", p);
	return(p);
}
void printline(int len)
{
	char i;

	for(i = 1; i <= len ; i++ )
	{
		printf("-");
	}
	printf("\n");
}
