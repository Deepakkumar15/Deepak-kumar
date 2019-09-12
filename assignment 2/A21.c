// programme for finding the area of the triangle
#include<stdio.h>
#include<math.h>
int main()
{	float a,b,c,s,r;
	printf(" enter the values of sides of triangle:");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	r=sqrt((s)*(s-a)*(s-b)*(s-c));
	printf("the value of the area is:%f",r);








}
