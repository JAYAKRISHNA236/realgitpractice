/* The arrays to be passed in function arguments */

#include<stdio.h>
void array(int arr[], int n);

void main()
{
	int arr[30], n, i ;
	printf("changed by razack 2nd time\n");
	printf("enter the size of an array ");
	scanf("%d",&n);
	printf("Enter the array values ");
	for(i = 0 ; i < n ; i++)
		scanf("%d", &arr[i]);
	array(arr, n);
}

void array(int arr[], int n)
{
	int i;
	for(i = 0 ; i < n ; i++)
		printf("%d ", arr[i]);
		j=arr[i];
}
