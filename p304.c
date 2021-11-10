/* Check whether a number is armstrong or not with in the range */

#include<stdio.h>

void armstrongcheck(int, int);

void main()
{
	int num1, num2;

	printf("Enter a number ");
	scanf("%d%d", &num1, &num2);

	armstrongcheck(num1, num2);
}
void armstrongcheck(int x, int y)
{
	int i, j, cube, sum = 0, k, l = 0;
	for(i = x; i <= y ; i++)
	{
		k = i;
		sum = 0;
		while( k != 0)
		{
			cube = 1;
			j = k % 10;
			l = 0 ;
			while( l < 3  )	
			{
				cube = cube * j;
				l++;
			}
			k = k/10;
			sum += cube;
		}
		if(sum == i)
			printf("%d\t", i);
	}
	printf("\n");
}
