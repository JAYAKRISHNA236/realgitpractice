/* Writing program for finding a diameter, circumference, area of a circle */

#include<stdio.h>
#include<string.h>

#define pi 3.14

float diameterofcircle(float r);
float circumferenceofcircle(float r);
float areaofcircle(float r);
void printline();

void main()
{
	float r;
	float diam, circum, area;
	
	printf("Enter radius value ");
	scanf("%f", &r);
	
	diam = diameterofcircle(r);
	circum = circumferenceofcircle(r);
	area = areaofcircle(r);
	printline();
	printf("Diameter = %f\n", diam);
	printf("circumference = %f\n", circum);
	printf("Area = %f\n", area);
	printline();

}

void printline()
{
	int i;
	for(i= 0 ; i <= 40; i++)
	{
		printf("-");
	}
	printf("\n");
}
float diameterofcircle(float r)
{
	float p;
	p = 2 * r;
	return(p);
}
float circumferenceofcircle(float r)
{
	float p;
	p = 2 * pi * r;
	return(p);
}
float areaofcircle(float r)
{
	float p;
	p = pi * r * r ;
	return(p);
}
