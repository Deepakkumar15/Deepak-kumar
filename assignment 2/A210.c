// programme for calculating the length of the chord
#include<stdio.h>
#include<math.h>
void main()
{	float h,k,r,s,d,e;
	printf("enter the value of the variables:");
	scanf("%f %f %f %f",&h,&k,&r,&s);
	d=sqrt(r*r-(s-h)*(s-h));
	e=2*d;
	printf("the value of the length of the chord is:%f",e);






}
