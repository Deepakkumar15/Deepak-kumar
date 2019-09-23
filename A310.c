//programme for printing that how many values are equal to x
#include<stdio.h>
#include<math.h>
void main()
{	float a,b,c,d,x,a1,b1,c1,d1,sum;
	printf("enter any five values which can be equal:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&x);
	if(x==a)
	{
	a1=1;}
	else
	{a1=0;}
	if(x==b)
	{b1=1;
	}
	else
	{b1=0;}
	if(x==c)
	{c1=1;}
	else
	{c1=0;}
	if(x==d)
	{d1=1;}
	else
	{d1=0;}

	sum=a1+b1+c1+d1;
	printf("\n %f",sum);}
