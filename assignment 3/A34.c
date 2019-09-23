// programme to find whether the angle is 90 degrees or not
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,r;
	printf("enter the value of the sides of the triangle:");
	scanf("%f %f %f",&a,&b,&c);

	r=(a*a)-((b*b)+(c*c));

	if(r==0)
	{printf("the angle is 90 degrees:");}

	else
	{printf("the angle is not 90 derees:");}

	




}
