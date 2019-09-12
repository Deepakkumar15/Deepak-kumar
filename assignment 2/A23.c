//programme for finding the area of the traingle whose cordinates are given
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,d,e,f,x,y,z,s,r;
	printf("enter the value of all the cordinates:");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	x=sqrt((d-b)*(d-b)+(c-a)*(c-a));
	y=sqrt((d-f)*(d-f)+(c-e)*(c-e));
	z=sqrt((f-b)*(f-b)+(e-a)*(e-a));
	s=(x+y+z)/2;
	r=sqrt(s*(s-x)*(s-y)*(s-z));
	printf("the value of the area is:%f",r);








}
