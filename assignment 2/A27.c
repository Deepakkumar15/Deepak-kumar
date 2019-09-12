// programme to find the point of intersection of two given lines
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,p,q,r,x,y;
	printf("enter the values of variables for the point of the intersection of ax+by+c=0 and px+qy+r=0:");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);

	x=-(b*r-c*q)/(b*p-a*q);
	y=(a*r-c*p)/(b*p-a*q);
	printf("\n the value of the cordinates is%f %f",x,y);







}
