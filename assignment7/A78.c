#include<stdio.h>
void main()
{
	float a,b,c,d,e,f,x,y,z;
	printf("enter the two vectors for cross product:");
	scanf("%fi%fj%fk %fi%fj%fk",&a,&b,&c,&d,&e,&f);
	x=(b*f)-(e*c);
	y=(c*d)-(a*f);
	z=(a*e)-(d*b);
	printf("\n the vector product is: %fi + %fj + %fk",x,y,z);
}




