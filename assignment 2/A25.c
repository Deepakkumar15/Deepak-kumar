// programme for finding the distance between a given point and a line
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,d,e,r;
	printf("enter the value of variables for finding the distance between (a,b) and the line cx+dy+e=0: ");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	r=(a*c+b*d+e)/sqrt(c*c+d*d);
	printf("the value of the distance is:%f",r);






}
