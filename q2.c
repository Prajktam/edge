#include<stdio.h>
#define PI 3.14
void con(float r);
void dob(float r);
int main()
{
	float r;
//	double pi,area1,perimeter1;
	printf("\n\tENTER THE RADIOUS OF CIRCLE =");
	scanf("%f",&r);
	con(r);
	dob(r);
	return 0;
}
void con(float r)
{
	float area,perimeter;
	area=PI*r*r;
	perimeter= 2*PI*r;
	printf("\n\t AREA OF CIRCLE  %f AS REDIOUS IS %f AND PERIMETER IS %f",r,area,perimeter);
	
}
void dob(float r)
{
	double area,perimeter;
	const double pi=3.14;
	area=pi*r*r;
        perimeter= 2*pi*r;
        printf("\n\t AREA OF CIRCLE  %f AS REDIOUS IS %lf AND PERIMETER IS %lf",r,area,perimeter);
        
}

