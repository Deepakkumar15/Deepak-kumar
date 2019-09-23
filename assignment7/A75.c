#include<stdio.h>
void main()
{	float a,b,c,d,e,f,r;
	printf("enter the values of the coefficients of vectors:");
	scanf("%fi%fj%fk %fi%fj%fk",&a,&b,&c,&d,&e,&f);
	r=a*d+b*e+c*f;
	printf("%f",r);

}
