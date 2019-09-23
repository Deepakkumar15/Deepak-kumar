#include<stdio.h>
void main()
{
	float a,b,c,d;
	printf("enter the value of coff. given in a*x+b*y+c=0:");
	scanf("%f%f%f",&a,&b,&c);
	d=-c/a;
	printf("\n point of intersection: (%f,0)",d);
}




